#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int b = 10;

	auto f = [b](int a) {return a + b; };
	//f()
	ostream os(std::cout);
	os << typeid(f).name() << endl;
	os << f(12) << endl;

	system("pause");
}