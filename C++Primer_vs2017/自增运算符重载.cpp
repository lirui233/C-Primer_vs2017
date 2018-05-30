#include "Integer.h"
#include <iostream>
using namespace std;

// 两种重载方式：成员函数和友元函数
// 两种方式的定义不同
// 成员函数隐含了一个对象，而友元函数不属于类，所以没有隐含对象
int main(void)
{
	Integer i1(10);
	i1.Display();
	++i1;
	i1.Display();

	system("pause");
	return 0;
}