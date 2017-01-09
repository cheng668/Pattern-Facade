#include "Scanner.h"


Scanner::Scanner(const char* ss) :_ss(ss)
{
}


Scanner::~Scanner()
{
}

int Scanner::Scan()
{
	return _ss.length();
}
