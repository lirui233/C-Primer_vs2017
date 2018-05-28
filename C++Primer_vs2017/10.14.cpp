#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int a = 10;
	int b = 11;

	auto f= [](int a, int b) {return a + b; };

	cout << f(1, 2) << endl;
	system("pause");
	return 0;
}