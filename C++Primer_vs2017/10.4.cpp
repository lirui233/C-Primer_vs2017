#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void)
{
	vector<double> vec{ 1.1,2.3,4.5 };
	auto result = accumulate(vec.begin(), vec.end(), 0.0); //���㷨���Ե�����������ΪԪ�����͵ı�׼
	cout << result << endl << typeid(result).name() << endl;

	system("pause");

	return 0;
}