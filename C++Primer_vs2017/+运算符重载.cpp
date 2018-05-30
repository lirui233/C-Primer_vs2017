#include "Complex.h"
#include <iostream>
using namespace std;

//运算符重载的本质就是函数重载

int main(void)
{
	Complex c1(1, 3);
	Complex c2(4, 6);
	Complex c3 = c1 + c2; //等价于Complex c3 = c1.operator+(c2);
	
	c1.Display();
	c2.Display();
	c3.Display();

	c1.Add(c2);
	c1.Display();


	system("pause");
	return 0;
}