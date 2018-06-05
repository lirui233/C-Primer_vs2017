#include <iostream>
using namespace std;

/*
Furniture���������
m_nWeight���ݳ�Ա��Bed���Sofa�๲��
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
	// ���е�ֱ�ӻ��Ӽ̳�������������(Sofa�࣬Bed�࣬SofaBed��)�������ڹ��캯���ĳ�Ա��ʼ���б��и����������Ĺ��캯���ĵ��ã���δ�г������ʾ���ø�������Ĭ�Ϲ��캯��
	SofaBed(int nWeight) :Sofa(nWeight), Bed(nWeight), Furniture(nWeight)
	{
		cout << "SofaBed()" << endl;
	}
	~SofaBed()
	{
		cout << "~SofaBed()" << endl;
	}
};

// �����ĳ�Ա������Զ��������SofaBed�Ĺ��캯��ͨ�����������Ĺ��캯�����г�ʼ����
// �ڽ�������ʱ��ֻ����Զ��������Ĺ��캯�����������Ĺ��캯��������������������������๹�캯���ĵ��ñ�����
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