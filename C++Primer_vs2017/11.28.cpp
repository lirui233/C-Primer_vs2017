#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <string>

using namespace std;

int main(void)
{
	map<string, vector<int>>::iterator iter;
	vector<int> vec{2};
	map<string, vector<int>> m;
	m.insert({ "12", vec });
	iter = m.find("12");

	cout << iter->first << " " << iter->first.at(0)<< endl;

	system("pause");

	return 0;
}