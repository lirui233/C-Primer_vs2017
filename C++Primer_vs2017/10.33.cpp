#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	ifstream in("1.txt");
	ofstream out1("2.txt"), out2("3.txt");
	vector<int> vec;
	istream_iterator<int> iter(in), eof;
	copy(iter, eof, back_inserter(vec));

	ostream_iterator<int> out_iter1(out1, " "), out_iter2(out2, "\n");
	for (const auto &x : vec)
	{
		if (x % 2 == 1)
		{
			*out_iter1++ = x;
		}
		else
		{
			*out_iter2++ = x;
		}
	}
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
//	ifstream in(/*argv[1]*/"1.txt");//导入第一个参数，作为输入文件  
//	istream_iterator<int> it1(in), end;//定义流迭代器，输入流，和输入流的尾迭代器  
//
//	vector<int> vec1;//存储用vector  
//					 /*  copy(it1,end,back_inserter(vec1));//将流中数据存入vector*/
//	while (it1 != end)
//	{
//		vec1.push_back(*it1);
//		++it1;
//	}
//
//	ofstream out(/*argv[2]*/"2.txt");
//	ofstream out2(/*argv[3]*/"3.txt");//目标写文件  
//	ostream_iterator<int> it2(out, "\n");//定义流迭代器，输出流，每行结尾换行  
//	ostream_iterator<int> it3(out2, "\n");//定义流迭代器，输出流，每行结尾换行  
//	for (int i = 0; i<vec1.size(); ++i)
//	{
//		if (vec1[i] % 2 == 0)//偶数  
//		{
//			it2++ = vec1[i];//偶数放在2.txt中  
//		}
//		else
//		{
//			it3++ = vec1[i];//奇数放在3.txt中  
//		}
//	}
//
//	return 0;
//}