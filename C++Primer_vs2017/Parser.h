#pragma once

class Scanner; // 前向声明
class Node;

enum ESTATUS
{
	STATUS_OK,
	STATUS_ERROR,
	STATUS_QUIT,
};


class Parser
{
public:
	Parser(Scanner & scanner);
	~Parser();
	void Parse();
	Node *Expr();
	Node *Term();
	Node *Factor();
	double Calculate() const;
private:
	Scanner & m_scanner; // 关联关系，不是组合关系
	Node *m_pTree;
	ESTATUS m_status;
};

