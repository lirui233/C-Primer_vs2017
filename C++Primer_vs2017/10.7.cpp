#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main1(void)
{
	vector<int> vec;
	list<int> lst;
	int i;
	while (cin >> i)
	{
		lst.push_back(i);
		if (i == 0)
		{
			break;
		}
	}
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));
	for (auto &x : vec)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}

int main(void)
{
	vector<int> vec;
	//vec.reserve(10);
	fill_n(back_inserter(vec), 10, 0);

	for (auto &x : vec)
	{
		cout << x << endl;
	}

	system("pause");

	return 0;
}