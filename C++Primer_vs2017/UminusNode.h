#pragma once
#include "UnaryNode.h"
//���������
class UminusNode :
	public UnaryNode
{
public:
	UminusNode(Node *child);
	~UminusNode();
	double Calc() const;
};

