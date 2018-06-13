#include <iostream>
#include <string>
#include "Scanner.h"
#include "Parser.h"
using namespace std;

int main(void)
{
	ESTATUS status = STATUS_OK;
	do
	{
		cout << "> ";
		string buf;
		getline(cin, buf);
		cout << buf << endl;
		Scanner scanner(buf); // É¨ÃèÆ÷
		Parser parser(scanner); // ½âÎöÆ÷
		parser.Parse();
		cout << parser.Calculate() << endl;
	} while (status != STATUS_QUIT);
	
	system("pause");
	return 0;
}