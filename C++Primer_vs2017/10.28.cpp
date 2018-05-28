#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <iterator>

using namespace std;

int main(void)
{
	vector<int> vec;
	vector<int> des;
	list<int> lst;
	deque<int> deq;
	int i = 1;
	auto f = [&vec, i]()mutable {while (i < 10) { vec.push_back(i); i++; } };

	f();
	for (const auto &x : vec)
	{
		cout << x << endl;
	}
	copy(vec.begin(), vec.end(), front_inserter(lst));
	copy(vec.begin(), vec.end(), back_inserter(deq));
	copy(vec.begin(), vec.end(), inserter(des, des.begin()));
	for (const auto &x : lst)
	{
		cout << x << " ";
	}
	cout << endl;
	for (const auto &x : deq)
	{
		cout << x << " ";
	}
	cout << endl;
	for (const auto &x : des)
	{
		cout << x << " ";
	}

	system("pause");
	return 0;
}