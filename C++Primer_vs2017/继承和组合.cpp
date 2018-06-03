#include <iostream>
using namespace std;

class A
{
public:
	int m_x;
};

class B :public A // ¼Ì³Ð
{
public:
	int m_x;
};

class C // ×éºÏ
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