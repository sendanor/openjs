/** C++ version of private_object.js
 * Of course it's not exactly same.
 */

#include <iostream>

class BasicCounter {
public:
	virtual ~BasicCounter() { };
	virtual void next() = 0;
	virtual int value() const = 0;
};

class Counter : public BasicCounter {
	int m_count;
public:
	Counter() : m_count(0) { }
	void next() { m_count++; };
	int value() const { return m_count; };
};

class NegativeCounter : public BasicCounter {
	int m_count;
public:
	NegativeCounter() : m_count(1000) { }
	void next() { m_count--; };
	int value() const { return m_count; };
};

void testCounter(BasicCounter* counter) {
	for(int i=0; i<=10; ++i) {
		std::cout << "counter = " << counter->value() << std::endl;
		counter->next();
	}
}

int main() {
	BasicCounter* counter = new Counter();
	testCounter(counter);
	delete counter;
	
	BasicCounter* n_counter = new NegativeCounter();
	testCounter(n_counter);
	delete n_counter;
}

/* EOF */
