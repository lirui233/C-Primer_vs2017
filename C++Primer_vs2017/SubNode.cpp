#include "SubNode.h"



SubNode::SubNode(Node * left, Node * right) :BinaryNode(left, right)
{
}


SubNode::~SubNode()
{
}

double SubNode::Calc() const
{
	return m_leftNode->Calc() - m_rightNode->Calc();;
}
