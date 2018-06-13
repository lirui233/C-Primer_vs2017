#pragma once

// 派生类禁止拷贝构造， 禁止赋值，对象语义
class Nocopyable
{
protected:
	Nocopyable();
	~Nocopyable();
private:
	Nocopyable(const Nocopyable &) {}
	const Nocopyable & operator=(const Nocopyable &) {}
};

 