#ifndef _STRING_H_
#define _STRING_H_

class String
{
public:
	String(const char *str); // Ϊ�˷�ֹ����delete,�ڴ�й©������Ҫ�����
	String(String &other);
	String &operator=(const char *str);
	String &operator=(const String &other);
	bool operator!() const;
	void Display() const;
	~String();
private:
	char *m_str;
};


#endif // _STRING_H_


