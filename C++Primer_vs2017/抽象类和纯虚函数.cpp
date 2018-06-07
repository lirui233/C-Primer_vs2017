#include <vector>
#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void Draw() = 0;
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
	//Shape s; // 不能实例化抽象类
	Circle c;
	c.Draw();

	vector<Shape *> v;
	Shape *s;
	s = new Circle;
	v.push_back(s);
	s = new Square;
	v.push_back(s);
	for (auto it : v)
	{
		(it)->Draw();
	}
}

int main(void)
{
	T();

	system("pause");
	return 0;
}