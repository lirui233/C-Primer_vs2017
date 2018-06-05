#include <iostream>
using namespace std;

/*
Furniture类是虚基类
m_nWeight数据成员被Bed类和Sofa类共享
*/
class Furniture
{
public:
	Furniture(int nWeight):m_nWeight(nWeight)
	{
		cout << "Furniture(int weight)" << endl;
	}

	int m_nWeight;
	~Furniture()
	{
		cout << "~Furniture()" << endl;
	}
};

class Bed :virtual public Furniture
{
public:
	Bed(int nWeight) :Furniture(nWeight)
	{
		cout << "Bed(int nWeight) :Furniture(nWeight)" << endl;
	}
	void Sleep()
	{
		cout << "Bed Sleep" << endl;
	}
	~Bed()
	{
		cout << "~Bed()" << endl;
	}
};

class Sofa :virtual public Furniture
{
public:
	Sofa(int nWeight) :Furniture(nWeight)
	{
		cout << "Sofa(int nWeight) :Furniture(nWeight)" << endl;
	}
	void WatchTV()
	{
		cout << "WatchTV" << endl;
	}
	~Sofa()
	{
		cout << "~Sofa()" << endl;
	}
};

class SofaBed :public Sofa, public Bed
{
public:
	// 所有的直接或间接继承虚基类的派生类(Sofa类，Bed类，SofaBed类)都必须在构造函数的成员初始化列表中给出对虚基类的构造函数的调用，如未列出，则表示调用该虚基类的默认构造函数
	SofaBed(int nWeight) :Sofa(nWeight), Bed(nWeight), Furniture(nWeight)
	{
		cout << "SofaBed()" << endl;
	}
	~SofaBed()
	{
		cout << "~SofaBed()" << endl;
	}
};

// 虚基类的成员是由最远的派生类SofaBed的构造函数通过调用虚基类的构造函数进行初始化的
// 在建立对象时，只有最远的派生类的构造函数调用虚基类的构造函数，该派生类的其他基类对虚基类构造函数的调用被忽略
void T()
{
	SofaBed sofaBed(5);
}


int main(void)
{
	T();

	system("pause");
	return 0;
}