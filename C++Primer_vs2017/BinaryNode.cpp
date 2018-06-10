#include "BinaryNode.h"



//BinaryNode::BinaryNode()
//{
//}

BinaryNode::BinaryNode(Node *left, Node *right) :m_leftNode(left), m_rightNode(right)
{

}

BinaryNode::~BinaryNode()
{
	delete m_leftNode;
	delete m_rightNode;
}
