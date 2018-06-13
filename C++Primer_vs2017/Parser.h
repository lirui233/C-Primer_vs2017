#pragma once

class Scanner; // ǰ������
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
	Scanner & m_scanner; // ������ϵ��������Ϲ�ϵ
	Node *m_pTree;
	ESTATUS m_status;
};

