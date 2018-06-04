#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
	Employee()
	{

	}
	Employee(const string &name, const int age, int deptno) :m_strName(name), m_iAge(age), m_iDeptno(deptno)
	{

	}
private:
	string m_strName;
	int m_iAge;
	int m_iDeptno;
};

class Manage :public Employee
{
public:
	Manage()
	{

	}
	Manage(const string &name, const int age, int deptno, int level) :Employee(name, age, deptno), m_iLevel(level)
	{

	}
private:
	int m_iLevel;
};

class Manage2 : private Employee
{
	Manage2()
	{

	}
	/*Manage2(const string &name, const int age, int deptno, int level) :Employee(name, age, deptno), m_iLevel2(level)
	{

	}*/
private:
	int m_iLevel2;
};

void T()
{
	Employee e1("lirui", 12, 20);
	Manage m1("zhangshan", 12, 33, 4);
	Employee *pEmployee;
	Manage *pManage;
	pEmployee = &e1; // 基类指针指向基类
	pManage = &m1; // 派生类指针指向派生类
	pEmployee = &m1; //基类指针指向派生类对象，派生类指针可以转换为基类指针，可以把派生类对象看成基类对象
//	pManage = &e1; //基类指针不可以转换为派生类指针，不可以把基类对象看成是派生类对象，基类比派生类表示更大的事务集合，派生类是基类的具体化
	e1 = m1; // 派生类对象可以转换为基类对象

	Manage2 *pm2;//("zhangshan", 12, 33, 4);
	//pm2 = reinterpret_cast<Manage2 *>(&e1); // 派生类对象指针转换为基类对象指针，需用reinterpret_cast强制类型转换
}

int main(void)
{
	T();

	system("pause");
	return 0;
}