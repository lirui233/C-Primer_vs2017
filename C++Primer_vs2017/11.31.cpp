//�������⣬�����ˣ����� 2017��11��6��
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>

using namespace std;

int main(void)
{
	multimap<string, string> m;
	m.insert({ "li", "1" });
	m.insert({ "li", "2" });
	m.insert({ "wang", "3" });

	auto iter = m.find("li");
	auto num = m.count("li");
	while (num)
	{
		m.erase(iter);
//		iter++;
		num--;
	}

	system("pause");
	return 0;
}