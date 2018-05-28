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
//using namespace placeholders;//占位符的命名空间  
//
//int main(int argc, char**argv)
//{
//	vector<int> vec1;
//	//创建流迭代器、尾后迭代器,最好是这样，放在一起，不然很可能类型不同就会报错  
//	istream_iterator<int> str(cin), end;//!=左右两边得是可以比较的嘛！  
//
//										//  while (str != end)  
//										//  {  
//										//      vec1.push_back(*str++);  
//										//        
//										//  }//此操作和copy一样的效果，只不过要记得++.  
//	copy(str, end, back_inserter(vec1));//存入vec1  
//
//	sort(vec1.begin(), vec1.end());//不能用cbegin(),我日  
//
//	for (int i = 0; i < vec1.size(); ++i)
//	{
//		cout << vec1[i] << endl;
//	}
//
//	return 0;
//}