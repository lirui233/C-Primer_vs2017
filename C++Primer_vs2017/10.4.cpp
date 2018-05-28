#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void)
{
	vector<double> vec{ 1.1,2.3,4.5 };
	auto result = accumulate(vec.begin(), vec.end(), 0.0); //该算法是以第三个参数作为元素类型的标准
	cout << result << endl << typeid(result).name() << endl;

	system("pause");

	return 0;
}