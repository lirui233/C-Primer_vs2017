#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>
#include <istream>
#include <iterator>

using namespace std;

int main(void)
{
	vector<string> vec;
	ifstream in("lambda.cpp");
	istream_iterator<string> str(in), eof;
	copy(str, eof, back_inserter(vec));
	for (const auto &x : vec)
	{
		cout << x << " ";
	}

	system("pause");
	return 0;
}

//#include<iostream>    
//#include<fstream>  
//#include<string>    
//#include<vector>    
//#include<algorithm>    
//#include<numeric>    
//#include<functional>  
//#include<iterator>  
//using namespace std;
//using namespace placeholders;//ռλ���������ռ�  
//
//int main(int argc, char**argv)
//{
//	vector<string> vec1;
//	ifstream in1("lambda.cpp");//������ʹ�ò��������ͣ�����Ϊû��ͷ�ļ�~~  
//	istream_iterator<string> str(in1);
//	istream_iterator<string> end;//β�������  
//
//	copy(str, end, back_inserter(vec1));//����vec1  
//
//	for (int i = 0; i < vec1.size(); ++i)
//	{
//		cout << vec1[i];
//	}
//	system("pause");
//	return 0;
//}