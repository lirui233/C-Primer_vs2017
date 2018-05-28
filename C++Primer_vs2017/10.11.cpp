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

int main(void)
{
	vector<string> vec{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	elimDups(vec);

	stable_sort(vec.begin(), vec.end(), isShorter);

	for (const auto &x : vec)
	{
		cout << x << " ";
	}
	
	system("pause");
	return 0;
}



