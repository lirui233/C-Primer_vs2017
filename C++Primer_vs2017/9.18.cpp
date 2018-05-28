#include <vector>
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void)
{
	string str;
	deque<string> deq;
	while (cin >> str)
	{
		if (str == "quit")
		{
			break;
		}
		
		deq.emplace_back(str);
	}

	cout << endl << endl << "deque:" << endl;

	for (auto &x : deq)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}