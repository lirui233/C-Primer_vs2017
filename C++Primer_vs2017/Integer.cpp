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


////��Ա����������������غ���Ԫ���ܹ���
//Integer & Integer::operator++()
//{
//	// TODO: �ڴ˴����� return ���
//	++this->m_ele;
//	return *this;
//}

void Integer::Display() const
{
	cout << this->m_ele << endl;
}

Integer & operator++(Integer & other)
{
	// TODO: �ڴ˴����� return ���
	++other.m_ele;
	return other;
}
