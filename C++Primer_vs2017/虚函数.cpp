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
	int m_nData1;
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
	int m_nData2;
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
	cout << sizeof(Base) << endl; //8 bytes
	cout << sizeof(Derived) << endl;//12 bytes

	Base b;
	size_t **p = reinterpret_cast<size_t **>(&b);
	typedef void(*FUNC)(void);
	//FUNC fun = (FUNC)(p[0][0]);
	//fun();
}

int main(void)
{
	T();

	system("pause");
	return 0;
}