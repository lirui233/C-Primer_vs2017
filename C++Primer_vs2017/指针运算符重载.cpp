#include <iostream>
using namespace std;

// ָ�����������
// ����ָ��ķ�װʵ�ַ�ʽ����
// ��̬�ķ�ʽ
// 
class DBHelper
{
public:
	DBHelper()
	{
		cout << "DBHelper...." << endl;
	}
	~DBHelper()
	{
		cout << "~DBHelper...." << endl;
	}
	void Open()
	{
		cout << "Open...." << endl;
	}
	void Query()
	{
		cout << "Querry...." << endl;
	}
	void Close()
	{
		cout << "Close...." << endl;
	}
};

class DB
{
public:
	DB()
	{
		m_DBHelper = new DBHelper;
	}
	~DB()
	{
		delete m_DBHelper;
	}
	DBHelper *operator->()
	{
		return m_DBHelper;
	}
private:
	DBHelper * m_DBHelper;
};

void T()
{
	DB db;
	db->Open();
	db->Query();
	db->Close();
}

int main(void)
{
	T();

	system("pause");
	return 0;	
}