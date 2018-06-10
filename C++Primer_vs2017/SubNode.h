#pragma once
#include "BinaryNode.h"
class SubNode :
	public BinaryNode
{
public:
	SubNode(Node * left, Node * right);
	~SubNode();
	double Calc() const;
};

