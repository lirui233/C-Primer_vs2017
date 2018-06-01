#include <iostream>
using namespace std;

// 指针运算符重载
// 智能指针的封装实现方式相似
// 多态的方式
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