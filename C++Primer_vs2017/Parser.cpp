#include "UminusNode.h"
#include "DivideNode.h"
#include "Node.h"
#include "Parser.h"
#include "Scanner.h"
#include "AddNode.h"
#include "SubNode.h"
#include "MultiplyNode.h"
#include "NumberNode.h"
#include <cassert>
#include <iostream>
using namespace std;

Parser::Parser(Scanner & scanner):m_scanner(scanner), m_pTree(nullptr)
{
}


Parser::~Parser()
{
}

void Parser::Parse()
{
	m_pTree = Expr(); // 解析是否为一个表达式
}

Node * Parser::Expr()
{
	Node *pNode = Term();
	ETOKEN token = m_scanner.Token();
	if (token == TOKEN_PLUS)
	{
		m_scanner.Accept();
		Node *pNodeRight = Expr();
		pNode = new AddNode(pNode, pNodeRight);
	}
	else if (token == TOKEN_MINUS)
	{
		m_scanner.Accept();
		Node *pNodeRight = Expr();
		pNode = new SubNode(pNode, pNodeRight);
	}
	return pNode;
}

Node * Parser::Term()
{
	Node *pNode = Factor();
	ETOKEN token = m_scanner.Token();
	if (token == TOKEN_MULTIPLY)
	{
		m_scanner.Accept();
		Node *pNodeRight = Term();
		pNode = new MultiplyNode(pNode, pNodeRight);
	}
	else if (token == TOKEN_DIVIDE)
	{
		m_scanner.Accept();
		Node *pNodeRight = Term();
		pNode = new DivideNode(pNode, pNodeRight);
	}
	return pNode;
}

Node * Parser::Factor()
{
	Node *pNode = nullptr;
	ETOKEN token = m_scanner.Token();
	if (token == TOKEN_LPARENTHESIS)
	{
		m_scanner.Accept(); // 接受'('
		pNode = Expr();
		if (m_scanner.Token() == TOKEN_RPARENTHESIS)
		{
			m_scanner.Accept(); // 接受')'
		}
		else
		{
			m_status = STATUS_ERROR;
			// 抛出异常
			cout << "右括号丢失" << endl;
			pNode = nullptr;
		}
	}
	else if (token == TOKEN_NUMBER)
	{
		pNode = new NumberNode(m_scanner.Number());
		m_scanner.Accept();
	}
	else if (token == TOKEN_MINUS) // 接受负号
	{
		m_scanner.Accept();
		pNode = new UminusNode(Factor());
	}
	else
	{
		m_status = STATUS_ERROR;
		// 抛出异常
		cout << "无效的表达式" << endl;
	}
	return pNode;
}

double Parser::Calculate() const
{
	assert(m_pTree != nullptr);
	return m_pTree->Calc();
}
