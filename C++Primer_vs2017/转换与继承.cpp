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

void T()
{
	Employee e1("lirui", 12, 20);
	Manage m1("zhangshan", 12, 33, 4);
	Employee *pEmployee;
	Manage *pManage;
	pEmployee = &e1; // ����ָ��ָ�����
	pManage = &m1; // ������ָ��ָ��������
	pEmployee = &m1; //����ָ��ָ�����������������ָ�����ת��Ϊ����ָ�룬���԰���������󿴳ɻ������
	pManage = &e1; //����ָ�벻����ת��Ϊ������ָ�룬�����԰ѻ�����󿴳�����������󣬻�����������ʾ��������񼯺ϣ��������ǻ���ľ��廯
	e1 = m1; // ������������ת��Ϊ�������
}

int main(void)
{
	T();

	system("pause");
	return 0;
}