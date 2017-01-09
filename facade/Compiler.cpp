#include "Compiler.h"
#include "Parser.h"
#include "Scanner.h"
Compiler::Compiler()
{
}


Compiler::~Compiler()
{
}

void Compiler::Compile()
{
	Scanner* scan = new Scanner("cheng668");
	Parser parse(scan);
	parse.Parse();
	delete scan;
}