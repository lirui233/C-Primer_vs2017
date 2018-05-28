#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
	list<string> str{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	str.sort();
	str.unique();

	for (const auto &x : str)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}

//"the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"//