#include "Integer.h"
#include <iostream>
using namespace std;

int main(void)
{
	Integer i(100);
	i = 200;
	cout << i << endl;
	int t;
	t = i; //�������������ת����������أ�����Ϊ���޷��ӡ�Integer��ת��Ϊ��int��
	cout << t << endl;
	system("pause");
	return 0;
}v 