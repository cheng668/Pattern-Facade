#pragma once
#include <string>
using namespace std;
class Scanner
{
public:
	Scanner(const char*);
	~Scanner();
	int Scan();
private:
	string _ss;
};

