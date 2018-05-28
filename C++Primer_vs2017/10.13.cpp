#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isBigthan(const string &str)
{
	return str.size() > 3;
}

int main(void)
{
	vector<string> vec{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	auto ti = partition(vec.begin(), vec.end(), [](const string &str) {return str.size() > 3; });

	/*for (const auto &x : vec)
	{
		cout << x << " ";
	}*/
	for_each(vec.begin(), vec.end(), [](const string &str) {cout << str << isBigthan(str) <<" "; });
	cout << endl;

	cout << *ti << endl;
	system("pause");
	return 0;
}