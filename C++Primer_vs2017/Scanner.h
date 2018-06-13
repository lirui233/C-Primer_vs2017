#pragma once
#include <string>
using namespace std;

enum EToken
{
	TOKEN_END,
	TOKEN_ERROR,
	TOKEN_NUMBER,
	TOKEN_PLUS,
	TOKEN_MINUS,
	TOKEN_MULTIPLY,
	TOKEN_DIVIDE,
	TOKEN_LPARENTHESIS, // ×óÀ¨ºÅ
	TOKEN_RPARENTHESIS, // ÓÒÀ¨ºÅ
	TOKEN_IDENTIFIER, //±êÊ¶·û
	TOKEN_ASSIGN
};


class Scanner
{
public:
	Scanner(const string &buf);
	~Scanner();
	void Accept(); // É¨Ãè
	double Number() const; // ·µ»ØÊý×Ö
	EToken Token() const; // ·µ»Ø×´Ì¬
private:
	const string m_strBuf; // ÊäÈëµÄ×Ö·û´®
	EToken m_token; // 
	double m_dNumber;
	unsigned int m_curPos;
	void SkipWhite(); // ºöÂÔ¿Õ°××Ö·û
};

