#include "Compiler.h"
#include <iostream>
void main()
{
	Compiler compile;
	compile.Compile();
	_CrtDumpMemoryLeaks();
	system("pause");
	return;
}