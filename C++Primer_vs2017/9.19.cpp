#include <iostream>
//#include <vector>
#include <list>
#include <string>

using namespace std;

int main(void)
{
	string str;
	list<string> l;
	while (cin >> str)
	{
		if (str == "quit")
		{
			break;
		}
		l.push_back(str);
	}

	for (auto &x : l)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}