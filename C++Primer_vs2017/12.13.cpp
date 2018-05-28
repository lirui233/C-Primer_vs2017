#include <iostream>
#include <memory>

using namespace std;

int main(void)
{
	auto sp = make_shared<int>();
	auto p = sp.get();
	delete p; //ÊÍ·ÅÁËÄÚ´æ

	system("pause");
	return 0;
}