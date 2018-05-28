#include <iostream>
using namespace std;

int var = 100;

int main(void)
{
	int var = 60;
	cout << var << endl;
	cout << ::var << endl; //域运算符可以访问全局变量

	system("pause");
	return 0;
}