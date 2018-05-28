#include <iostream>
#include <memory>

using namespace std;

int main(void)
{
	unique_ptr<int> p(new int(1));
	//auto q = p;
	//unique_ptr<int> q(p);

	system("pause");
	return 0;
}