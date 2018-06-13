#include <iostream>
#include <string>
#include "Scanner.h"
#include "Parser.h"
using namespace std;

int main(void)
{
	do
	{
		cout << "> ";
		string buf;
		getline(cin, buf);
		cout << buf << endl;
		Scanner scanner(buf); // É¨ÃèÆ÷
		Parser parser(scanner); // ½âÎöÆ÷
		parser.Parse();
		parser.Calculate();
	} while (1);
	
	system("pause");
	return 0;
}