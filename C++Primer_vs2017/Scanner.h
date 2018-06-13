#pragma once
#include <string>
using namespace std;
enum ETOKEN
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
	ETOKEN Token() const; // ·µ»Ø×´Ì¬
private:
	const string m_strBuf; // ÊäÈëµÄ×Ö·û´®
	ETOKEN m_token; // 
	double m_dNumber;
	unsigned int m_curPos;
	void SkipWhite(); // ºöÂÔ¿Õ°××Ö·û
};

