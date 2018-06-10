#include "UnaryNode.h"

UnaryNode::UnaryNode(Node * child):m_childNode(child)
{
}

UnaryNode::~UnaryNode()
{
	delete m_childNode;
}
