#include "MultiplyNode.h"



MultiplyNode::MultiplyNode(Node * left, Node * right) :BinaryNode(left, right)
{
}


MultiplyNode::~MultiplyNode()
{
}

double MultiplyNode::Calc() const
{
	return m_leftNode->Calc() * m_rightNode->Calc();
}
