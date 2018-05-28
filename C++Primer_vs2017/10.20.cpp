#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	vector<string> vec{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	cout << count_if(vec.begin(), vec.end(), [](const string &str) {return str.size() > 5; });

	system("pause");
	return 0;
}