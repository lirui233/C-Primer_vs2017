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
//using namespace placeholders;//ռλ���������ռ�  
//
//int main(int argc, char**argv)
//{
//	ifstream in(/*argv[1]*/"1.txt");//�����һ����������Ϊ�����ļ�  
//	istream_iterator<int> it1(in), end;//��������������������������������β������  
//
//	vector<int> vec1;//�洢��vector  
//					 /*  copy(it1,end,back_inserter(vec1));//���������ݴ���vector*/
//	while (it1 != end)
//	{
//		vec1.push_back(*it1);
//		++it1;
//	}
//
//	ofstream out(/*argv[2]*/"2.txt");
//	ofstream out2(/*argv[3]*/"3.txt");//Ŀ��д�ļ�  
//	ostream_iterator<int> it2(out, "\n");//���������������������ÿ�н�β����  
//	ostream_iterator<int> it3(out2, "\n");//���������������������ÿ�н�β����  
//	for (int i = 0; i<vec1.size(); ++i)
//	{
//		if (vec1[i] % 2 == 0)//ż��  
//		{
//			it2++ = vec1[i];//ż������2.txt��  
//		}
//		else
//		{
//			it3++ = vec1[i];//��������3.txt��  
//		}
//	}
//
//	return 0;
//}