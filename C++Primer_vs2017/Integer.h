#ifndef _INTERGER_H_
#define _INTERGER_H_

class Integer
{
public:
	Integer();
	Integer(int n);
	~Integer();
	//Integer &operator++(); // 成员函数方式重载

	friend Integer &operator++(Integer &other);
	void Display() const;
private:
	int m_ele;
};


#endif // !_INTERGER_H_


