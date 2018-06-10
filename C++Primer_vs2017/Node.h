#pragma once
#include <cmath>
class Node
{
public:
	Node();
	virtual ~Node();
	virtual double Calc() const = 0;
};

