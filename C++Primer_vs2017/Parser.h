#pragma once

class Scanner; // Ç°ÏòÉùÃ÷

enum EStatus
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
	Scanner & m_scanner;
	Node *m_pTree;
	EStatus m_status;
};

