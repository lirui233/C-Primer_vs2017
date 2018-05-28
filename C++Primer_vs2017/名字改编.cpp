#include <iostream>
using namespace std;

//extern "C" 表示不进行名字改编,按C语言方式进行名字,即C语言不能函数重载
extern "C" void fun(int a);

int main(void)
{
	fun(1);

	system("pause");
	return 0;
}