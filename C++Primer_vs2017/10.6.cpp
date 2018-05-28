#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> vec;
	//for (int i = 0; i < 11; i++)
	//{
	//	vec.push_back(i);
	//}
	fill_n(back_inserter(vec), 10, 0);

	for (auto &x : vec)
	{
		cout << x << endl;
	}

	system("pause");
	return 0;
}