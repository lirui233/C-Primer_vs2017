#include <iostream>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
	istream_iterator<int> in(cin), eof;
	cout << accumulate(in, eof, 0) << endl;

	ostream_iterator<int> out_iter(cout, " ");
	vector<int> vec{ 1,2,3,4,5 };
	copy(vec.begin(), vec.end(), out_iter);

	system("pause");
	return 0;
}