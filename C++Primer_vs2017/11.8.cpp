#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	vector<string> vec{ "1","2","3" };
	string words;
	while (cin >> words && words != "end")
	{
		if (find(vec.cbegin(), vec.cend(), words) != vec.cend())
		{
			cout << "²»ÔÊÐíÊäÈë" << endl;
		}
		else
		{
			vec.push_back(words);
		}
	}

	for_each(vec.cbegin(), vec.cend(), [](string str) {cout << str << "\t"; });
	cout << endl;

	system("pause");
	return 0;
}