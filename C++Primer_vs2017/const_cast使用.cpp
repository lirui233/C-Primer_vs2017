#include <iostream>
using namespace std;

// const_cast�����Ƴ�������
// const_castһ������ָ���������
// const_cast ȥ�������Բ���Ϊ���޸�����ָ������ݣ�������Ϊ��ȥ��const�޶���Ϊ�˺����ܹ��������ʵ�ʲ���
void fun(int *a)
{
	cout << *a << endl;
}

int main(void)
{
	const int val = 100;
	int *p = const_cast<int *>(&val);
	int &refVal = const_cast<int &>(val);
	cout << "*p = " << *p << endl;
	cout << "refVal = " << refVal << endl;

	fun(const_cast<int *>(&val)); 

	system("pause");
	return 0;
}