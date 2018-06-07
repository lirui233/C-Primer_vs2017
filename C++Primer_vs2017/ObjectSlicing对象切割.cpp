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
	((CDocument)myDoc).Func();//myDocǿ��ת��ΪCDocument���󣬽�����һ������ת�ͣ�����������г�Ա����ʧ�����Ҳ�ᷢ���仯������ȫȫ�����������ת��Ϊ�˻�����󣬵����˻���Ŀ������캯��������������󿽱�����Ϊ�������
	cout << endl;
}

int main(void)
{
	T();

	system("pause");
	return 0;
}