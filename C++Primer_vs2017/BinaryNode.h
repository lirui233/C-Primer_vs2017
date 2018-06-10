#pragma once
#include "Node.h"
class BinaryNode :
	public Node
{
public:
//	BinaryNode();
	BinaryNode(Node *left, Node *right); // 因为存在const常量，所以必须要在构造函数中初始化const常量，故无参数构造函数不能存在
	~BinaryNode();
protected:
	Node *const m_leftNode; // 指针本身不能改变
	Node *const m_rightNode;
};

