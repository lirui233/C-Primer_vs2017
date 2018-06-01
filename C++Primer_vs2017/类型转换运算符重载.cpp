#include "Integer.h"
#include <iostream>
using namespace std;

int main(void)
{
	Integer i(100);
	i = 200;
	cout << i << endl;
	int t;
	t = i; //如果不进行类型转换运算符重载，报错为：无法从“Integer”转换为“int”
	cout << t << endl;
	system("pause");
	return 0;
}v 