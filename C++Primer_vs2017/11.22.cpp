#include <iostream>
#include <map>
#include <iterator>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	map<string, vector<int>> words_count;
	string str;
	
	while (cin >> str && str != "end")
	{
		vector<int> vec;
		words_count.insert({ str, vec });
		vec.push_back(0);
	}
	

	return 0;
}