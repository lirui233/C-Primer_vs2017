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
	//Integer &operator++(); // ��Ա������ʽ����

	friend Integer &operator++(Integer &other);
	friend ostream &operator<<(ostream &os, const Integer &other);
	void Display() const;
	operator int(); // ǿ������ת�����������
private:
	int m_ele;
};


#endif // !_INTERGER_H_


