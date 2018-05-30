#ifndef _COMPLEX_H_ //复数类，实部和虚部
#define _COMPLEX_H_

class Complex
{
public:
	Complex();
	~Complex();
	Complex(int r, int i);
	Complex operator+(const Complex &other);
	friend Complex operator+(const Complex &c1, const Complex &c2); //比类成员函数多一个参数，因为友元不是类成员，没有隐含一个对象
	void Display() const;
	Complex& Add(const Complex& other);
private:
	int m_real;
	int m_imag;
};


#endif // !_COMPLEX_H_


 