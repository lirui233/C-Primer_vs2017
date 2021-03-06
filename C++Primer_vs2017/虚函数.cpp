#include <iostream>
using namespace std;

class Base
{
public:
	Base() { cout << "Base()" << endl; }

	// 如果一个类要作为多态基类，要将析构函数定义成虚函数
	// 验证虚表时，虚析构函数这里报错
	//virtual ~Base()
	//{
	//	cout << "~Base()" << endl;
	//}
	virtual void Fun1()
	{
		cout << "Base Fun1()" << endl;
	}
	virtual void Fun2()
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

typedef void (*FUNC)(void);
// 若Fun1不是虚函数，则根据p的类型调用相应类中的成员函数
// 若Fun1是虚函数，则p指向什么类型就调用相应类型的成员函数
// 动态绑定的虚函数，必须通过基类指针或引用调用
// 析构函数必须为虚函数，因为new出来的隐形调用了派生类的构造函数
// delete必须先调用派生类的析构函数，否则会造成内存泄漏
void T()
{
	//Base *p = new Derived;
	//p->Fun1();
	//p->Fun2();
	//delete p;
	cout << sizeof(Base) << endl; //8 bytes
	cout << sizeof(Derived) << endl;//12 bytes

	Base b;
	long **ptr = reinterpret_cast<long **>(&b);

	FUNC fun = (FUNC)ptr[0][1];
//	fun();

	Derived d;
	long **ptr1 = reinterpret_cast<long **>(&d);
	FUNC fun1 = (FUNC)ptr1[0][1];
	fun1();
}

int main(void)
{
	T();

	system("pause");
	return 0;
}