#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	string str1("lirui1");
	string str2("lirui1");
	char *pStr1 = "lirui";
	char *pStr2 = "lirui";
	auto result = equal(str1.cbegin(), str1.cend(), str2.cbegin());
	cout << result << endl << typeid(result).name() << endl;
	cout << *(str1.cbegin()+1) << endl;
	////编译错误，因为const char *中没有支持==
	//auto res = equal(pStr1, pStr1 + 5, pStr2);
	//cout << res << endl << typeid(res).name() << endl;
	system("pause");
	return 0;
}