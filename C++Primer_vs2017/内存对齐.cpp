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
	//cout << &(test.ch) << endl; //输出乱码,C++标准库中I/O类对输出操作符<<重载，在遇到字符型指针时会将其当做字符串名来处理，输出指针所指的字符串。 
	cout << &(test.a) << endl;
	cout << sizeof(test) << endl;
	cout << static_cast<void *>(&test.ch) << endl;

	system("pause");
	return 0;
}