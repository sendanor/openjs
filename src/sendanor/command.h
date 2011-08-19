/* libsendanor-base -- Advanced command execution
 * $Id: exec.h 6229 2008-09-18 16:38:28Z jheusala $
 */

/* pipe() that throws exceptions */
inline void exc_pipe(int pfd[2]) {
	if (pipe(pfd) != 0) throw RUNTIME_ERROR(strerror(errno));
}

/* fork() that throws exceptions */
inline pid_t exc_fork() {
	pid_t pid = fork();
	if (pid == -1) throw RUNTIME_ERROR(strerror(errno));
	return pid;
}

/* dup that throws exceptions */
inline int exc_dup(int oldfd) {
	int ret = dup(oldfd);
	if(ret == -1) throw RUNTIME_ERROR(strerror(errno));
	return ret;
}

/* dup2 that throws exceptions */
inline int exc_dup2(int oldfd, int newfd) {
	int ret = dup2(oldfd, newfd);
	if(ret == -1) throw RUNTIME_ERROR(strerror(errno));
	return ret;
}

/* close() that throws exceptions */
inline void exc_close(int fd) {
	if( close(fd) == -1) throw RUNTIME_ERROR(strerror(errno));
}

/* wait() that throws exceptions */
inline pid_t exc_wait(int *status) {
	pid_t ret = wait(status);
	if(ret == -1) throw RUNTIME_ERROR(strerror(errno));
	return ret;
}

/* wait() that throws exceptions */
inline pid_t exc_waitpid(pid_t pid, int *status, int options) {
	pid_t ret = waitpid(pid, status, options);
	if(ret == -1) throw RUNTIME_ERROR(strerror(errno));
	return ret;
}

/* */
class process {
public:
	
	process(const Glib::ustring& command, const std::vector<Glib::ustring>& args);
	void start();
	void wait();
	int exit_status();
	
private:
	
	void do_child_exec();
	
	int m_status;
	pid_t m_pid;
	Glib::ustring m_command;
	std::vector<Glib::ustring> m_args;
	int m_in_fd, m_out_fd, m_err_fd;
	
};

/* Constructor */
process(const Glib::ustring& command, const std::vector<Glib::ustring>& args)
 : m_status(0), m_pid(-1), m_command(command), m_args(args)
 , m_in_fd(0), m_out_fd(0), m_err_fd(0) {
}

/** FIXME: argbuf could be std::vector */
void process::start() {
	SENDANOR_LOGGER_FUNCTION("exec", "command=`" << command << "', args[" << args.size() << "], output, error_output" );
	int stdin_pfd[2];
	int stdout_pfd[2];
	int stderr_pfd[2];
	
	exc_pipe(stdin_pfd);
	exc_pipe(stdout_pfd);
	exc_pipe(stderr_pfd);
	
	m_pid = exc_fork();
	if (m_pid == 0) {
		try {
			
			exc_close(stdin_pfd[0]);
			exc_close(stdout_pfd[0]);
			exc_close(stderr_pfd[0]);
			
			exc_dup2(stdin_pfd[1], STDIN_FILENO);
			exc_dup2(stdout_pfd[1], STDOUT_FILENO);
			exc_dup2(stderr_pfd[1], STDERR_FILENO);
			
			do_child_exec();
			
		} catch (std::exception& e) {
			std::cerr << "forked child: error: " << e.what() << std::endl;
			exit(1);
		} catch (...) {
			std::cerr << "forked child: error: unknown exception" << std::endl;
			exit(1);
		}
	}
	
	exc_close(stdin_pfd[1]);
	exc_close(stdout_pfd[1]);
	exc_close(stderr_pfd[1]);
	
	m_in_fd = exc_dup(stdin_pfd[0]);
	m_out_fd = exc_dup(stdout_pfd[0]);
	m_err_fd = exc_dup(stderr_pfd[0]);
	
}

/** Check if the process is running.*/
bool process::is_running() {
	return exc_wait(m_pid, &m_status, WNOHANG) == 0;
}

/** Wait for the process to finish */
void process::wait() {
	exc_wait(m_pid, &m_status, 0);
}

/** Returns exit status of the process */
int process::exit_status() {
	if(!WIFEXITED(m_status)) wait();
	if(!WIFEXITED(m_status)) throw RUNTIME_ERROR("!WIFEXITED(m_status)");
	return WEXITSTATUS(m_status)
}

/* */
void process::do_child_exec() {
	typedef char* arg_t;
	arg_t* argbuf = new arg_t[m_args.size()+2];
	
	argbuf[0] = new char[m_command.size()+1];
	std::copy(m_command.begin(), m_command.end(), argbuf[0]);
	argbuf[0][m_command.size()] = 0;
	//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[0]=`" << argbuf[0] << "'" << std::endl;
	
	for(std::size_t i=0; i<m_args.size(); ++i) {
		argbuf[i+1] = new char[m_args[i].size()+1];
		std::copy(m_args[i].begin(), m_args[i].end(), argbuf[i+1]);
		argbuf[i+1][m_args[i].size()] = 0;
		//std::cerr << "[debug " << __FILE__ << ":" << __LINE__ << "] argbuf[" << i+1 << "]=`" << argbuf[i+1] << "'" << std::endl;
	}
	argbuf[m_args.size()+1] = 0;
	execvp(m_command.c_str(), argbuf);
	throw RUNTIME_ERROR(strerror(errno));
}

#endif
/* EOF */
