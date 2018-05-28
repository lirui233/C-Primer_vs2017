#include <list>
#include <algorithm>
#include <string>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main1(void)
{
	list<string> str{ "12", "11","23","lirui","lirui","12", "11" };
	auto result = count(str.cbegin(), str.cend(), "23");
	cout << result << endl;

	system("pause");
	return 0;
}

//ÇóºÍËã·¨
int main(void)
{
	vector<int> vec{ 1,2,3,4,5,6,7,89 };
	cout << accumulate(vec.begin(), vec.end(), 0.0) << endl;

	system("pause");
	return 0;
}