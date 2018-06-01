#ifndef _STRING_H_
#define _STRING_H_
#include <iostream>
using namespace std;
class String
{
public:
	String();
	String(const char *str); // 为了防止两次delete,内存泄漏，所以要用深拷贝
	String(String &other);
	String &operator=(const char *str);
	String &operator=(const String &other);
	bool operator!() const;
	void Display() const;
	char &operator[](size_t index);
	friend ostream &operator<<(ostream &os, const String &str);
	friend istream &operator>>(istream &is, String &str);
	~String();
private:
	char *m_str;
};


#endif // _STRING_H_


