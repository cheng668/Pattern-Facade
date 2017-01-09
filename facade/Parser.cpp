#include "Parser.h"
#include "Scanner.h"
#include <iostream>
Parser::Parser(Scanner* scan) :scan(scan)
{
}


Parser::~Parser()
{
}

void Parser::Parse()
{
	std::cout<<scan->Scan()<<std::endl;
}
