#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void Draw() = 0;
	virtual ~Shape()
	{

	}
};

class Circle :public Shape
{
public:
	void Draw()
	{
		cout << "Circle::Draw()" << endl;
	}
};

class Square :public Shape
{
public:
	void Draw()
	{
		cout << "Square::Draw()" << endl;
	}
};

void T()
{
	Shape *p = new Circle;
	p->Draw();
	if (dynamic_cast<Circle *>(p))
	{
		cout << "p指向Circle对象" << endl;
		Circle *cp = dynamic_cast<Circle *>(p); // 安全向下转型
		cp->Draw();
	}
	else if (dynamic_cast<Square *>(p))
	{
		cout << "p指向Square对象" << endl;
	}
	else
	{
		cout << "p指向其他类型对象" << endl;
	}
	cout << typeid(*p).name() << endl;
	cout << typeid(p).name() << endl;
}

int main(void)
{
	T();

	system("pause");
	return 0;
}