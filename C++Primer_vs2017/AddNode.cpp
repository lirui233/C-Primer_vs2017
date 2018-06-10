#include "AddNode.h"



//AddNode::AddNode()
//{
//}


AddNode::AddNode(Node * left, Node * right):BinaryNode(left, right)
{
}

AddNode::~AddNode()
{
}

double AddNode::Calc() const
{
	//return m_nleftNode->
	return m_leftNode->Calc() + m_rightNode->Calc();
}
