#include <iostream>
#include <algorithm>
#include <vector>
#include <istream>
#include <iterator>

using namespace std;

int main(void)
{
	istream_iterator<int> in(cin), eof;
	vector<int> vec;
	copy(in, eof, back_inserter(vec));
	sort(vec.begin(), vec.end());
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
//	vector<int> vec1;
//	//��������������β�������,���������������һ�𣬲�Ȼ�ܿ������Ͳ�ͬ�ͻᱨ��  
//	istream_iterator<int> str(cin), end;//!=�������ߵ��ǿ��ԱȽϵ��  
//
//										//  while (str != end)  
//										//  {  
//										//      vec1.push_back(*str++);  
//										//        
//										//  }//�˲�����copyһ����Ч����ֻ����Ҫ�ǵ�++.  
//	copy(str, end, back_inserter(vec1));//����vec1  
//
//	sort(vec1.begin(), vec1.end());//������cbegin(),����  
//
//	for (int i = 0; i < vec1.size(); ++i)
//	{
//		cout << vec1[i] << endl;
//	}
//
//	return 0;
//}