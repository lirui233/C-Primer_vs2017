#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

shared_ptr<vector<int>> vecNew()
{
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> cinVec(shared_ptr<vector<int>> p)
{
	int i;
	while (cin >> i && i != -1)
	{
		p->push_back(i);
	}
	return p;
}

void print(shared_ptr<vector<int>> q)
{
	//auto iter = q->begin();
	for_each(q->begin(), q->end(), [](auto iter) { cout << iter << " " << typeid(iter).name() << endl; });
	cout << endl;
}

int main(void)
{
	print(cinVec(vecNew()));

	system("pause");
	return 0;
}