#include <iostream>

using namespace std;

int main(void)
{
	int i = 10;
	auto f = [&]()mutable ->bool {if (0 == i)return true; while (i > 0) i--; return false; };
	cout << f() << endl << i << endl;

	system("pause");
}