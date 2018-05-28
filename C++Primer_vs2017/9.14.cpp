#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main(void)
{
	list<char *> l{ "li","wang", "min" };
	vector<string> str;
	str.assign(l.begin(), l.end());

	vector<string>::iterator iter = str.begin();
	while (iter != str.end())
	{
		cout << *iter << endl;
		iter++;
	}
	cin.get();
	return 0;
}