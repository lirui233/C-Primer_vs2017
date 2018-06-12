#pragma once
#include <cmath>
#include "Nocopyable.h"
class Node:private Nocopyable
{
public:
	Node();
	virtual ~Node();
	virtual double Calc() const = 0;
};

