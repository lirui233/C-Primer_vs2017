#include <iostream>
#include <string>
using namespace std;
// �����׳����������쳣Ҳ�����׳��Զ��������쳣
// throw�׳�һ����������ÿ������캯��
// �쳣����֮ǰ�����ľֲ��������٣���һ���̳�Ϊջչ��

// �Զ����쳣��
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
		MyException e("division by zero"); // 1.���ù��캯��
		throw e; // 2.���ÿ������캯���� ����e�����ˣ����������������׳��쳣 
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
	catch (MyException &e) // 3.�쳣��catch��׽��
	{
		cout << e.What() << endl; // 4.����Ĵ�ӡ��Ϣ
	} // 5.���׳����쳣�������������Ҳ������
	catch (...)
	{
		cout << "..." << endl;
	}
	system("pause");
	return 0;
}

int main(void)
{
	// ����ڲ�try��û���ҵ����ʵ��쳣�����������쳣���⴫���������try������catch����Ѱ��
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