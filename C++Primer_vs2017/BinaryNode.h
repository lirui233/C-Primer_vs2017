#pragma once
#include "Node.h"
class BinaryNode :
	public Node
{
public:
//	BinaryNode();
	BinaryNode(Node *left, Node *right); // ��Ϊ����const���������Ա���Ҫ�ڹ��캯���г�ʼ��const���������޲������캯�����ܴ���
	~BinaryNode();
protected:
	Node *const m_leftNode; // ָ�뱾���ܸı�
	Node *const m_rightNode;
};

