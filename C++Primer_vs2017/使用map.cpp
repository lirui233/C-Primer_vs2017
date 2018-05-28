#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
	string word;
	map<string, size_t> word_count;
	while (cin >> word)
	{
		if (word == "q")
			break;
		++word_count[word];
	}
	for (const auto &x : word_count)
	{
		cout << x.first << " " << x.second << endl;
	}

	system("pause");
	return 0;
}