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
	while ([&]()->bool {cout << "�������գ�"; return cin >> first_name &&  first_name != "end"; }())
	{
		while ([&]()->bool {cout << "��������:"; return cin >> last_name && last_name != "end"; }())
		{
			family[first_name].push_back(last_name);
			while ([&]()->bool {cout << "����������: "; return cin >> birthday && birthday != "end"; }())
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
//#include<cctype>//ctype�޷��򿪣�����tolower()������ispunct����  
//#include<algorithm>  
//#include<utility>//����pair��ͷ�ļ�  
//using namespace std;
//
//int main(int argc, char**argv)
//{
//	//map�Ķ���  
//	map<string, vector<string>> family;
//	vector<pair<string, string>> child;
//	string first_name, child_name, _birthday;
//
//	cout << "�������У�����end�����ʾ����" << endl;
//	//��while��ʹ��lambda��䣬���Դ����������������������Ҫ����ĵ��������Ҳ�������У�ע������һ������  
//	while ([&]()->bool {cout << "�������ͥ����:"; return cin >> first_name && (first_name != "end"); }())
//	{
//		while ([&]()->bool {cout << "�����뺢�ӵ�����:"; return cin >> child_name && (child_name != "end"); }())
//		{
//			family[first_name].push_back(child_name);
//			while ([&]()->bool {cout << "�����뺢�ӵ�����:"; return cin >> _birthday && (_birthday != "end"); }())
//			{
//				child.push_back(make_pair(child_name, _birthday));
//			}
//
//		}
//	}
//
//	//mapͬ��֧�ֵ���������  
//	map<string, vector<string>>::iterator mapi;
//	for (mapi = family.begin(); mapi != family.end(); ++mapi)//C++ 11֧��:const auto &s : word_count  
//	{
//		//������Ա�ֱ����ؼ��ֺͶ�Ӧֵ  
//		cout << mapi->first << " :";
//		vector<string>::iterator it1 = mapi->second.begin();
//		for (it1; it1 != mapi->second.end(); ++it1)
//		{
//			cout << *it1 << " ";
//		}
//	}
//
//	vector<pair<string, string>>::iterator it1 = child.begin();
//	cout << "�����ǵ���Ϣ��" << endl;
//	for (it1; it1 != child.end(); ++it1)
//	{
//		cout << it1->first << " " << it1->second << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}