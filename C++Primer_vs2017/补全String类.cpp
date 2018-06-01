#include <iostream>
#include "String.h"
using namespace std;
#include <string>
int main(void)
{
	String s1("123456");
	s1[3] = 'D';
	//s1.Display();
	cout << s1 << endl;
	
	String s2;
	cin >> s2;
	cout << endl << endl;
	cout << s2;

	system("pause");
	return 0;
}