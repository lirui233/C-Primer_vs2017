#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	try
	{
		cout << vec.at(0) << endl;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
//	cout << vec[0] << endl;
	//cout << vec.front() << endl;
	//cout << vec.back() << endl;

	system("pause");

	return 0;
}