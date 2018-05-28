#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

int main(void)
{
	vector<int> vec{ 0,1,2,3,4,5,6,7,8,9 };
	list<int> lst(vec.crbegin() + 3, vec.crend() -2);

	for (const auto &x : lst)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}