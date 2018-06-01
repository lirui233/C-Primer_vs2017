#include "String.h"
//#include <iostream>
#include <stdio.h>
//using namespace std;


String::String()
{
}

String::String(const char * str = "")
{
	int len = strlen(str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, str);
}

String::String(String & other)
{
	size_t len = strlen(other.m_str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, other.m_str);
}

String & String::operator=(const char * str)
{
	// TODO: �ڴ˴����� return ���
	delete[] m_str;
	int len = strlen(str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, str);
	return *this;
}

String & String::operator=(const String & other)
{
	// TODO: �ڴ˴����� return ���
	delete[] m_str;
	if (this == &other)
	{
		return *this;
	}
	int len = strlen(other.m_str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, other.m_str);
	return *this;
}

bool String::operator!() const
{
	return strlen(m_str) != 0;
}

void String::Display() const
{
	cout << this->m_str << endl;
}

char & String::operator[](size_t index)
{
	// TODO: �ڴ˴����� return ���
	return m_str[index];
}

String::~String()
{
	delete[] m_str;
}

ostream & operator<<(ostream & os, const String & str)
{
	// TODO: �ڴ˴����� return ���
	os << str.m_str;
	return os;
}

istream & operator>>(istream & is, String & str)
{
	// TODO: �ڴ˴����� return ���
	char temp[1024] = { 0 };
	is >> temp;
	str = temp;
	return is;
}
