#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main(void)
{
	vector<int> vec{ 1,2,3,4,5 };
	list<int> l{ 1,2,3,4,5 };
	if (vec == l) // 必须相同类型的容器
	{
		cout << "==" << endl;
	}

	return 0;
}