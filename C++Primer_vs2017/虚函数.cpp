#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "Base()" << endl; }

	// ���һ����Ҫ��Ϊ��̬���࣬Ҫ����������������麯��
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
	virtual void Fun1()
	{
		cout << "Base Fun1()" << endl;
	}
	void Fun2()
	{
		cout << "Base Fun2()" << endl;
	}
};

class Derived :public Base
{
public:
	Derived() { cout << "Derived()" << endl; }
	~Derived()
	{
		cout << "~Derived()" << endl;
	}
	void Fun1()
	{
		cout << "Derived Fun1()" << endl;
	}
};

// ��Fun1�����麯���������p�����͵�����Ӧ���еĳ�Ա����
// ��Fun1���麯������pָ��ʲô���;͵�����Ӧ���͵ĳ�Ա����
// ��̬�󶨵��麯��������ͨ������ָ������õ���
// ������������Ϊ�麯������Ϊnew���������ε�����������Ĺ��캯��
// delete�����ȵ�����������������������������ڴ�й©
void T()
{
	Base *p = new Derived;
	p->Fun1();
	p->Fun2();
	delete p;
}

int main(void)
{
	T();

	system("pause");
	return 0;
}