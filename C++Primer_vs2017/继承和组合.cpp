#include <iostream>
using namespace std;

class A
{
public:
	int m_x;
};

class B :public A // �̳�
{
public:
	int m_x;
};

class C // ���
{
public:
	int m_x;
	A a;
};

int main(void)
{
	cout << sizeof(B) << endl << sizeof(C) << endl;
	
	system("pause");
	return 0;
}