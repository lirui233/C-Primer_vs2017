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
	TOKEN_LPARENTHESIS, // ������
	TOKEN_RPARENTHESIS, // ������
	TOKEN_IDENTIFIER, //��ʶ��
	TOKEN_ASSIGN
};


class Scanner
{
public:
	Scanner(const string &buf);
	~Scanner();
	void Accept(); // ɨ��
	double Number() const; // ��������
	EToken Token() const; // ����״̬
private:
	const string m_strBuf; // ������ַ���
	EToken m_token; // 
	double m_dNumber;
	unsigned int m_curPos;
	void SkipWhite(); // ���Կհ��ַ�
};

