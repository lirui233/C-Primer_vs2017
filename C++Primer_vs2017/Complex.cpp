#include "Complex.h"
#include <iostream>
using namespace std;


Complex::Complex()
{
}


Complex::~Complex()
{
}

Complex::Complex(int r, int i):m_real(r), m_imag(i)
{
}

Complex Complex::operator+(const Complex & other)
{
	int r = m_real + other.m_real;
	int i = m_imag + other.m_imag;
	return Complex(r, i);
}

void Complex::Display() const
{
	cout << m_real << "+" << m_imag << "i" << endl;
}

Complex & Complex::Add(const Complex & other)
{
	// TODO: 在此处插入 return 语句
	this->m_real += other.m_real;
	this->m_imag += other.m_imag;
	return *this;
}

Complex operator+(const Complex & c1, const Complex & c2)
{
	int r = c1.m_real + c2.m_real;
	int i = c1.m_imag + c2.m_imag;
	return Complex(r, i);
}
