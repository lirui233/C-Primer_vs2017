#include <iostream>
using namespace std;

int main(void)
{
	struct Test
	{
		char ch;
		double a;
		char ch2;
	};

	Test test;
	//cout << &(test.ch) << endl; //�������,C++��׼����I/O������������<<���أ��������ַ���ָ��ʱ�Ὣ�䵱���ַ��������������ָ����ָ���ַ����� 
	cout << &(test.a) << endl;
	cout << sizeof(test) << endl;
	cout << static_cast<void *>(&test.ch) << endl;

	system("pause");
	return 0;
}