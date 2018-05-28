#include <iostream>
#include <iterator>
#include <list>
#include <algorithm>

using namespace std;

int main(void)
{
	list<int> lst{ 1,2,3,0,5,4,1,0,1 };
	auto iter = find(lst.crbegin(), lst.crend(), 0);

	cout << *iter << endl;
	//cout << 
	system("pause");
	return 0;
}