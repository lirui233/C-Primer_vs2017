#include "DivideNode.h"



DivideNode::DivideNode(Node * left, Node * right) :BinaryNode(left, right)
{
}


DivideNode::~DivideNode()
{
}

double DivideNode::Calc() const
{
	if (m_rightNode->Calc() == 0)
	{
		return HUGE_VAL;
	}
	else
	{
		return m_leftNode->Calc() / m_rightNode->Calc();
	}
	return 0.0;
}
