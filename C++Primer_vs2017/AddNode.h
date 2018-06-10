#pragma once
#include "BinaryNode.h"
class AddNode :
	public BinaryNode
{
public:
	//AddNode(); // 普通构造函数
	AddNode(Node *left, Node *right); // 普通构造函数
	~AddNode();
	double Calc() const;
};

