#include "String.h"
#include <iostream>
#include <stdio.h>
using namespace std;


String::String(const char * str = "")
{
	int len = strlen(str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, str);
}

String::String(String & other)
{
	int len = strlen(other.m_str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, other.m_str);
}

String & String::operator=(const char * str)
{
	// TODO: 在此处插入 return 语句
	delete[] m_str;
	int len = strlen(str) + 1;
	m_str = new char[len];
	memset(m_str, 0, len);
	strcpy(m_str, str);
	return *this;
}

String & String::operator=(const String & other)
{
	// TODO: 在此处插入 return 语句
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

String::~String()
{
	delete[] m_str;
}
