#include <iostream>
#include <string>
using namespace std;
// 可以抛出内置类型异常也可以抛出自定义类型异常
// throw抛出一个类对象会调用拷贝构造函数
// 异常发生之前创建的局部对象被销毁，这一过程称为栈展开

// 自定义异常类
class MyException
{
public:
	MyException(const char *message) :m_strMessage(message)
	{
		cout << "MyException()" << endl;
	}
	MyException(const MyException &other) :m_strMessage(other.m_strMessage)
	{
		cout << "copy MyException()" << endl;
	}
	~MyException()
	{
		cout << "~MyException()" << endl;
	}
	const string What() const
	{
		return m_strMessage;
	}
private:
	string m_strMessage;
};

double Divied(double a, double b)
{
	if (b == 0.0)
	{
		MyException e("division by zero"); // 1.调用构造函数
		throw e; // 2.调用拷贝构造函数， 并且e销毁了，调用析构函数，抛出异常 
	}
	else
	{
		return a / b;
	}
}
int main1(void)
{
	try
	{
		cout << Divied(5, 0) << endl;
	}
	catch (MyException &e) // 3.异常被catch捕捉到
	{
		cout << e.What() << endl; // 4.输出的打印信息
	} // 5.所抛出的异常对象的生命周期也结束了
	catch (...)
	{
		cout << "..." << endl;
	}
	system("pause");
	return 0;
}

int main(void)
{
	// 如果内层try块没有找到合适的异常处理器，该异常向外传播，到外层try块后面的catch块中寻找
	try
	{
		try
		{
			throw MyException("test exception");
		}
		catch (int)
		{
			cout << "catch a int exception" << endl;
		}
	}
	catch (MyException &e)
	{
		cout << e.What() << endl;
	}

	system("pause");
	return 0;
}