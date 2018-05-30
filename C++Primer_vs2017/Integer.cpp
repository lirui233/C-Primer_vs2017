#include "Integer.h"
#include <iostream>
using namespace std;


Integer::Integer()
{
}

Integer::Integer(int n):m_ele(n)
{
}


Integer::~Integer()
{
}


////成员函数自增运算符重载和友元不能共存
//Integer & Integer::operator++()
//{
//	// TODO: 在此处插入 return 语句
//	++this->m_ele;
//	return *this;
//}

void Integer::Display() const
{
	cout << this->m_ele << endl;
}

Integer & operator++(Integer & other)
{
	// TODO: 在此处插入 return 语句
	++other.m_ele;
	return other;
}
