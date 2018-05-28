#include <iostream>
#include <map>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	map<string, vector<string>> family;
	vector<pair<string, string>> vec;
	string first_name, last_name, birthday;
	while ([&]()->bool {cout << "请输入姓："; return cin >> first_name &&  first_name != "end"; }())
	{
		while ([&]()->bool {cout << "请输入名:"; return cin >> last_name && last_name != "end"; }())
		{
			family[first_name].push_back(last_name);
			while ([&]()->bool {cout << "请输入生日: "; return cin >> birthday && birthday != "end"; }())
			{
				vec.push_back(make_pair(last_name, birthday));
			}
		}
	}

	for (const auto & x : family)
	{
		cout << x.first << "\t";
		for_each(x.second.cbegin(), x.second.cend(), [](const string str) {cout << str << "\t"; });
	}
	for (const auto & x : vec)
	{
		cout << x.first << "\t" << x.second << endl;
	}

	system("pause");
	return 0;
}

//#include<iostream>    
//#include<string>    
//#include<fstream>  
//#include<list>  
//#include<vector>   
//#include<map>    
//#include<set>  
//#include<cctype>//ctype无法打开，包含tolower()函数和ispunct函数  
//#include<algorithm>  
//#include<utility>//保存pair的头文件  
//using namespace std;
//
//int main(int argc, char**argv)
//{
//	//map的定义  
//	map<string, vector<string>> family;
//	vector<pair<string, string>> child;
//	string first_name, child_name, _birthday;
//
//	cout << "本输入中，均以end输入表示截至" << endl;
//	//在while中使用lambda语句，可以传入多条语句参数，将我们想要传入的的输出参数也放在其中，注意后面的一对括号  
//	while ([&]()->bool {cout << "请输入家庭的姓:"; return cin >> first_name && (first_name != "end"); }())
//	{
//		while ([&]()->bool {cout << "请输入孩子的名字:"; return cin >> child_name && (child_name != "end"); }())
//		{
//			family[first_name].push_back(child_name);
//			while ([&]()->bool {cout << "请输入孩子的生日:"; return cin >> _birthday && (_birthday != "end"); }())
//			{
//				child.push_back(make_pair(child_name, _birthday));
//			}
//
//		}
//	}
//
//	//map同样支持迭代器操作  
//	map<string, vector<string>>::iterator mapi;
//	for (mapi = family.begin(); mapi != family.end(); ++mapi)//C++ 11支持:const auto &s : word_count  
//	{
//		//两个成员分别代表关键字和对应值  
//		cout << mapi->first << " :";
//		vector<string>::iterator it1 = mapi->second.begin();
//		for (it1; it1 != mapi->second.end(); ++it1)
//		{
//			cout << *it1 << " ";
//		}
//	}
//
//	vector<pair<string, string>>::iterator it1 = child.begin();
//	cout << "孩子们的信息：" << endl;
//	for (it1; it1 != child.end(); ++it1)
//	{
//		cout << it1->first << " " << it1->second << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}