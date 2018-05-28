#include <iostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;

int main(void)
{
	map<string, int> word_count;
	string word;
	while (cin >> word && word != "end")
	{
		auto iter = word_count.insert({ word, 1 });
		if (!iter.second)
		{
			iter.first->second++;
		}
	}

	for (const auto & x : word_count)
	{
		cout << x.first << " " << x.second << endl;
	}

	system("pause");
	return 0;
}