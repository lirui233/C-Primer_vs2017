#include "Integer.h"
#include <iostream>
using namespace std;

// �������ط�ʽ����Ա��������Ԫ����
// ���ַ�ʽ�Ķ��岻ͬ
// ��Ա����������һ�����󣬶���Ԫ�����������࣬����û����������
int main(void)
{
	Integer i1(10);
	i1.Display();
	++i1;
	i1.Display();

	system("pause");
	return 0;
}