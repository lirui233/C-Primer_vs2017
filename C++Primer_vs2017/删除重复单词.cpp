/*
标准库算法对迭代器而不是容器操作，因此算法不能直接添加或删除元素，不能直接改变容器大小
back_inerter()算法是创建了一个插入迭代器，该迭代器相当于调用了push_back()方法
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
	vector<string> vec{ "the","quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };

	sort(vec.begin(), vec.end()); //先按照字典序排序
	auto end_unique = unique(vec.begin(), vec.end());//重排范围，返回最后一个不重复元素的后一个位置
	vec.erase(end_unique, vec.end());//删除重复元素

	for (auto &x: vec)
	{
		cout << x << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}