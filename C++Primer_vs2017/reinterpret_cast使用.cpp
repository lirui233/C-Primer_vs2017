#include <iostream>
using namespace std;

//�������Զ�������ʽ���½���


int main(void)
{
	int i;
	char *p = "This is a";
	i = reinterpret_cast<int>(p);
	cout << hex << i << endl << hex << (void *)p << endl; //i��p�����ȫ��ͬ
/*
	//pcָ�����ʵ������int�ͣ������ַ���
	//�����pc�����ַ�ָ�������������ܻ��������ʱ����
	//��int len = strlen(pc);
	int *ip;
	char *pc = reinterpret_cast<char *>(ip);
*/	
	system("pause");
	return 0;
}