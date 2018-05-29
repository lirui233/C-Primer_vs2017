#include "String.h"
#include <iostream>
using namespace std;

int main(void)
{
	String s1("asdadasda");
	String s2(s1);
	String s3 = s2;
	String s4 = "asdfgjhjkklllllllllllll";

	s1.Display();
	s2.Display();
	s3.Display();
	s4.Display();

	String s5("");
	cout << !s5 << endl;
	s5 = "zxcvb";
	cout << !s5 << endl;

	system("pause");
	return 0;
}