#pragma once

// �������ֹ�������죬 ��ֹ��ֵ����������
class Nocopyable
{
protected:
	Nocopyable();
	~Nocopyable();
private:
	Nocopyable(const Nocopyable &) {}
	const Nocopyable & operator=(const Nocopyable &) {}
};

 