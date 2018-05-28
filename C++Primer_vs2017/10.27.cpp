#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> vec{ 1,2,3,4,5,5,5,4,3,23,6 };
	list<int> lst;
	unique_copy(vec.cbegin(), vec.cend(), back_inserter(lst));

	for (const auto &x : lst)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}