#pragma once
class Scanner; // Ç°ÏòÉùÃ÷
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

