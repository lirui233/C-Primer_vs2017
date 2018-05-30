#ifndef _COMPLEX_H_ //�����࣬ʵ�����鲿
#define _COMPLEX_H_

class Complex
{
public:
	Complex();
	~Complex();
	Complex(int r, int i);
	Complex operator+(const Complex &other);
	friend Complex operator+(const Complex &c1, const Complex &c2); //�����Ա������һ����������Ϊ��Ԫ�������Ա��û������һ������
	void Display() const;
	Complex& Add(const Complex& other);
private:
	int m_real;
	int m_imag;
};


#endif // !_COMPLEX_H_


 