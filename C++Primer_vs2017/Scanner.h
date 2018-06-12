#pragma once
#include <string>
using namespace std;
class Scanner
{
public:
	Scanner(const string &buf);
	~Scanner();
private:
	const string m_strBuf;
};

