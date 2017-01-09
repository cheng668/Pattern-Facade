#pragma once
class Scanner;
class Parser
{
public:
	Parser(Scanner*);
	~Parser();
	void Parse();
private:
	Scanner* scan = nullptr;
};

