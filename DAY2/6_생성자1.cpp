// 5_������1.cpp - 80 page
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;

public:
	void init(const std::string& n, int a)
	{
		name = n;
		age = a;
	}
};
int main()
{
	// #1. ��� ��� ����Ÿ�� public ������
	// => �ᱹ C ����� ����ü�� �����մϴ�.
	// => ����, �Ʒ�ó�� ����ü �ʱ�ȭ �������� �ʱ�ȭ �����մϴ�.
	// Person p = { "kim", 28 };

	// #2. ��� ����Ÿ�� private �� �ִٸ� ��ó�� �ʱ�ȭ �ȵ˴ϴ�.
	// => ��� �Լ��� �ʱ�ȭ �ؾ� �մϴ�.
	Person p;
	p.init("kim", 28);

}



