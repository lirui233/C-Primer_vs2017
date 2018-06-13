#include "Scanner.h"
#include <cctype>
#include <string>
using namespace std;

Scanner::Scanner(const string &buf):m_strBuf(buf), m_curPos(0)
{
	Accept(); //调用构造函数就开始扫描
}


Scanner::~Scanner()
{
}

void Scanner::Accept()
{
	SkipWhite();
	char *p = nullptr;
	switch (m_strBuf[m_curPos])
	{
	case '+':
		m_token = TOKEN_PLUS;
		++m_curPos;
		break;
	case '-':
		m_token = TOKEN_MINUS;
		++m_curPos;
		break;
	case '*':
		m_token = TOKEN_MULTIPLY;
		++m_curPos;
		break;
	case '/':
		m_token = TOKEN_DIVIDE;
		++m_curPos;
		break;
	case '(':
		m_token = TOKEN_LPARENTHESIS;
		++m_curPos;
		break;
	case ')':
		m_token = TOKEN_RPARENTHESIS;
		++m_curPos;
		break;
	case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':case '.':
		m_token = TOKEN_NUMBER;
		strtod(&m_strBuf[m_curPos], &p);
		if (p)
		{
			m_curPos = p - &m_strBuf[0];
		}
		break;
	case '\0':case '\n':case '\r':case EOF:
		m_token = TOKEN_END;
		break;
	default:
		m_token = TOKEN_ERROR;
	}
}

double Scanner::Number() const
{
	return m_dNumber;
}

EToken Scanner::Token() const
{
	return m_token;
}

void Scanner::SkipWhite()
{
	while (isspace(m_strBuf[m_curPos]))
		++m_curPos;
}
