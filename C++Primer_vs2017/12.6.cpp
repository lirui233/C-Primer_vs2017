#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> *makeNew()
{
	return new vector<int>;
}

vector<int>* cinVec(vector<int> *p)
{
	int i;
	while (cin >> i && i != -1)
	{
		p->push_back(i);
	}

	return p;
}

void print(vector<int> *q)
{
	for (const auto &x : *q)
	{
		cout << x << " ";
	}
	cout << endl;

	delete q;
}

int main(void)
{
	print(cinVec(makeNew()));

	system("pause");
	return 0;
}