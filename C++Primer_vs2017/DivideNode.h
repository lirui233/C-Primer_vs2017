#pragma once
#include "BinaryNode.h"
class DivideNode :
	public BinaryNode
{
public:
	DivideNode(Node * left, Node * right);
	~DivideNode();
	double Calc() const;
};

