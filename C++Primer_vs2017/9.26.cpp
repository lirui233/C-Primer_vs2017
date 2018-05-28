#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	int a[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vec(a, a+11);
	list<int> l(a, a+11);
	auto iter = vec.begin();
	for (;iter != vec.end();)
	{
		if (0 == (*iter) % 2)
		{
			iter = vec.erase(iter);
		}
		else
		{
			++iter;
		}
	}
	for (auto &x : vec)
	{
		cout << x << endl;
	}

	cout << endl;
	auto iter2 = l.begin();
	for (; iter2 != l.end();)
	{
		if (*iter2 % 2)
		{
			iter2 = l.erase(iter2);
		}
		else
		{
			iter2++;
		}
	}

	for (auto &x : l)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}