#pragma once
#include "UnaryNode.h"
//¸ººÅÔËËã·û
class UminusNode :
	public UnaryNode
{
public:
	UminusNode(Node *child);
	~UminusNode();
	double Calc() const;
};

