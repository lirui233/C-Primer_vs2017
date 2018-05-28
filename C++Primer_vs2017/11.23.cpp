#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iterator>

using namespace std;

int main(void)
{
	multimap<string, vector<string>> family;
	string first_name, /*last_name, birthday*/str;
	
	while ([&]()->bool {cout << "ÇëÊäÈëÐÕ: "; return cin >> first_name && first_name != "end"; }())
	{
		vector<string> last_name;
		while ([&]()->bool {cout << "ÇëÊäÈëÃû: "; return cin >> str && str != "end"; }())
		{
			last_name.push_back(str);			
		}
		family.insert({ first_name, last_name });
	}

	for (const auto & x : family)
	{
		cout << x.first << ":";
		for (auto iter = x.second.cbegin(); iter != x.second.cend(); iter++)
		{
			cout << *iter << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}