#pragma once
class Scanner; // ǰ������
class Parser
{
public:
	Parser(Scanner & scanner);
	~Parser();
	void Parse();
	double Calculate() const;
private:
	Scanner & m_scanner;
};

