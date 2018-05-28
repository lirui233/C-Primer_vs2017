#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec1{ 1,2,3,4,5,6,9 };
	vector<int> vec2{ 1,2,3,4,5,5 };
	if (vec1 == vec2)
	{
		cout << "==" << endl;
	}
	else if (vec1 < vec2)
	{
		cout << "vec1 < vec2" << endl;
	}
	else
	{
		cout << "vec1 > vec2" << endl;
	}
	
	cin.get();
	return 0;
}