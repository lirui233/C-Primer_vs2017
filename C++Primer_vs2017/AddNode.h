#pragma once
#include "BinaryNode.h"
class AddNode :
	public BinaryNode
{
public:
	//AddNode(); // ��ͨ���캯��
	AddNode(Node *left, Node *right); // ��ͨ���캯��
	~AddNode();
	double Calc() const;
};

