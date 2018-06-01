#ifndef _INTERGER_H_
#define _INTERGER_H_
#include <iostream>
using namespace std;
class Integer
{
public:
	Integer();
	Integer(int n);
	~Integer();
	//Integer &operator++(); // 成员函数方式重载

	friend Integer &operator++(Integer &other);
	friend ostream &operator<<(ostream &os, const Integer &other);
	void Display() const;
	operator int(); // 强制类型转换运算符重载
private:
	int m_ele;
};


#endif // !_INTERGER_H_


