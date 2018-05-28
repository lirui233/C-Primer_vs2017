#include <iostream>
#include <list>
#include <deque>

using namespace std;

int main(void)
{
	list<int> l{ 1,2,3,4,5,6,7,8,9 };
	deque<int> deq1;
	deque<int> deq2;
	for (auto &x : l)
	{
		if (x % 2 == 0)
		{
			deq1.push_back(x);
		}
		else
		{
			deq2.push_back(x);
		}
	}

	for (auto &x : deq1)
	{
		cout << x << endl;
	}
	for (auto &x : deq2)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}