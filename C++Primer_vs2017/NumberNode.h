#pragma once
#include "Node.h"
class NumberNode :
	public Node
{
public:
	NumberNode();
	NumberNode(double number);
	~NumberNode();
	double Calc() const;
private:
	double m_nNumber;
};

