#include <iostream>
using namespace std;

int main(void)
{
	const int a = 100;
	int n = const_cast<int>(a); //不能转化

	system("pause");
	return 0;
}