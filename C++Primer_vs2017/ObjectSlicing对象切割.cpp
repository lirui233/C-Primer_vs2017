#include <iostream>
using namespace std;

class CObject
{
public:
	virtual void Serialize()
	{
		cout << "Object::Serialize" << endl;
	}
};

class CDocument :public CObject
{
public:
	virtual void Serialize()
	{
		cout << "CDocument::Serialize" << endl;
	}
	void Func()
	{
		cout << "CDocument::Func" << endl;
		Serialize();
	}
	int m_nData1;
};

class CMyDoc :public CDocument
{
public:
	virtual void Serialize()
	{
		cout << "CMyDoc::Serialize" << endl;
	}
	int m_nData2;
};

void T()
{
	CMyDoc myDoc;
	CMyDoc *pMyDoc = new CMyDoc;

	myDoc.Func();
	cout << endl;
	((CDocument *)(&myDoc))->Func();
	cout << endl;
	pMyDoc->Func();
	cout << endl;
	((CDocument)myDoc).Func();//myDoc强制转换为CDocument对象，进行了一次向上转型，派生类的特有成员会消失，虚表也会发生变化。完完全全将派生类对象转换为了基类对象，调用了基类的拷贝构造函数，将派生类对象拷贝构造为基类对象
	cout << endl;
}

int main(void)
{
	T();

	system("pause");
	return 0;
}