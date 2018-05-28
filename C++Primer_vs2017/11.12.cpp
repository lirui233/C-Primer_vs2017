#include <vector>
#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main(void)
{
	vector<pair<string, int>> vec;
	vec.push_back({ "1", 1 });
	vec.emplace_back("str", 2);
	vec.push_back(make_pair("li", 3));
	cout << vec.at(2).first;
	system("pause");
	return 0;
}