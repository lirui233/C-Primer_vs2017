#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6,5,4,4,4,3,2,1,5,6,3,2,2,41,1,3,4,5,3,2,1,3 };
	auto result = count(vec.cbegin(), vec.cend(), 3); //����ֵ�ǳ��ֵĴ�˵
	cout << "result:" << result << endl;
	cout << typeid(result).name() << endl;
	system("pause");

	return 0;
}