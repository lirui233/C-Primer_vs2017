#include <iostream>
using namespace std;

//extern "C" ��ʾ���������ָı�,��C���Է�ʽ��������,��C���Բ��ܺ�������
extern "C" void fun(int a);

int main(void)
{
	fun(1);

	system("pause");
	return 0;
}