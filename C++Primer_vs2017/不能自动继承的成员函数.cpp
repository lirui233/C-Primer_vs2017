#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base()" << endl;
	}
	~Base()
	{
		cout << "~Base()" << endl;
	}
	Base(int x) :m_x(x)
	{
		cout << "Base(int x)" << endl;
	}
	int m_x;
	static int m_y; // 静态成员无所谓继承，内存中只有一份
};

int Base::m_y = 233;

class Derived :public Base
{
public:
	Derived()
	{
		cout << "Derived()" << endl;
	}
	Derived(int x, int y) : m_d(x), Base(y) // 构造子类需要调用基类构造，若调用基类拷贝构造，需给基类传递参数
	{
		cout << "Derived(int x)" << endl;
	}
	~Derived()
	{
		cout << "~Derived()" << endl;
	}
	int m_d;
};

void T()
{
	Derived D(3, 4);
	cout << D.m_d << "    " << D.m_x << endl;
	cout << Base::m_y << endl;
	cout << Derived::m_y << endl;
}

int main(void)
{
	T();
	
	system("pause");
	return 0;
}