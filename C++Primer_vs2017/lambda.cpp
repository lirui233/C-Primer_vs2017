#include <iostream>
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

//�Ȱ����ֵ���
void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique);
}

//�ٰ��մ�С
bool isShorter(const string &str1, const string &str2)
{
	return str1.size() < str2.size();
}

auto f = []() {return 112; };

int main(void)
{
	cout << f() << endl;
	
	system("pause");
	return 0;
}