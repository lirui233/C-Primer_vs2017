#include <iostream>
using namespace std;

// const_cast用于移除常量性
// const_cast一般用于指针或者引用
// const_cast 去除常量性不是为了修改它所指向的内容，仅仅是为了去除const限定，为了函数能够接受这个实际参数
void fun(int *a)
{
	cout << *a << endl;
}

int main(void)
{
	const int val = 100;
	int *p = const_cast<int *>(&val);
	int &refVal = const_cast<int &>(val);
	cout << "*p = " << *p << endl;
	cout << "refVal = " << refVal << endl;

	fun(const_cast<int *>(&val)); 

	system("pause");
	return 0;
}