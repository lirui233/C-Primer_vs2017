#pragma once
#include "BinaryNode.h"
class MultiplyNode :
	public BinaryNode
{
public:
	MultiplyNode(Node * left, Node * right);
	~MultiplyNode();
	double Calc() const;
};

