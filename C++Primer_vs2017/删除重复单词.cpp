/*
��׼���㷨�Ե�������������������������㷨����ֱ����ӻ�ɾ��Ԫ�أ�����ֱ�Ӹı�������С
back_inerter()�㷨�Ǵ�����һ��������������õ������൱�ڵ�����push_back()����
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<string> vec{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	sort(vec.begin(), vec.end()); //�Ȱ����ֵ�������
	auto end_unique = unique(vec.begin(), vec.end());//���ŷ�Χ���������һ�����ظ�Ԫ�صĺ�һ��λ��
	vec.erase(end_unique, vec.end());//ɾ���ظ�Ԫ��

	for (auto &x: vec)
	{
		cout << x << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}