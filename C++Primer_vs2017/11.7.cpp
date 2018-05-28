#include <vector>
#include <iostream>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main(void)
{
	map<string, vector<string>> fam;
	string first_name, second_name;
	while ([&]()->bool {cout << "first name:"; return cin >> first_name && first_name != "end"; }())
	{
		cout << "second name:";
		while (cin >> second_name && second_name != "end")
		{
			fam[first_name].push_back(second_name);
		}
	}

	map<string, vector<string>>::const_iterator iter = fam.cbegin();
	for (iter; iter != fam.cend(); iter++)
	{
		cout << iter->first << ":";
		vector<string>::const_iterator ivec = iter->second.cbegin();
		for (ivec; ivec != iter->second.cend(); ivec++)
		{
			cout << *ivec << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}