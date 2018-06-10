#include "UminusNode.h"

UminusNode::UminusNode(Node * child):UnaryNode(child)
{

}

UminusNode::~UminusNode()
{
}

double UminusNode::Calc() const
{
	return 0.0 - m_childNode->Calc();
}
