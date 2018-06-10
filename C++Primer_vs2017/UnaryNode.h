#pragma once
#include "Node.h"

// Ò»ÔªÔËËã·û
class UnaryNode :
	public Node
{
public:
	UnaryNode(Node *child);
	~UnaryNode();
protected:
	Node * const m_childNode;
};

