
PLEASE NOTE:

Use of this extension is not preferred because it looks very much impossible to 
write programs not to leak memory with GDOME2.

I suggest you to use jsxmlpp. It also uses GDOME2 and does leak memory but 
because it's an external program it can be easily forced to free the memory by 
restarting the external preprosessor.
