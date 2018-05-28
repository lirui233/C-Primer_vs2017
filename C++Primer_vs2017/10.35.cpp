#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	auto iter = vec.cend();
	for (; iter != vec.cbegin(); iter--)
	{
		cout << *(iter-1) << endl;
	}
	//cout << *vec.cbegin() << endl;
	system("pause");
	return 0;
}