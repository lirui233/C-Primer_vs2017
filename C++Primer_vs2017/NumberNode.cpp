#include "NumberNode.h"



NumberNode::NumberNode()
{
}

NumberNode::NumberNode(double number) :m_nNumber(number)
{

}

NumberNode::~NumberNode()
{
}

double NumberNode::Calc() const
{
	return m_nNumber;
}
