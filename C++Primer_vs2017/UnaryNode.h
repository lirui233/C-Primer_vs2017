#pragma once
#include "Node.h"

// һԪ�����
class UnaryNode :
	public Node
{
public:
	UnaryNode(Node *child);
	~UnaryNode();
protected:
	Node * const m_childNode;
};

