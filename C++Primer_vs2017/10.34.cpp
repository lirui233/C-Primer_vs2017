#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	for (auto r_iter = vec.crbegin(); r_iter != vec.crend(); r_iter++)
	{
		cout << *r_iter << endl;
	}

	system("pause");
	return 0;
}