#include <iostream>
using namespace std;

int var = 100;

int main(void)
{
	int var = 60;
	cout << var << endl;
	cout << ::var << endl; //����������Է���ȫ�ֱ���

	system("pause");
	return 0;
}