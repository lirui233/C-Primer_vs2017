#include <iostream>
using namespace std;

//将数据以二进制形式重新解释


int main(void)
{
	int i;
	char *p = "This is a";
	i = reinterpret_cast<int>(p);
	cout << hex << i << endl << hex << (void *)p << endl; //i与p结果完全相同
/*
	//pc指向的真实对象是int型，并非字符串
	//如果将pc当作字符指针来操作，可能会造成运行时错误
	//如int len = strlen(pc);
	int *ip;
	char *pc = reinterpret_cast<char *>(ip);
*/	
	system("pause");
	return 0;
}