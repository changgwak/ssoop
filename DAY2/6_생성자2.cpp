// 5_������1.cpp - 80 page
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// �����ڴ� ������ ���� �˴ϴ�.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
		std::cout << "������1\n";
	}
	Person()
	{
		name = "�̸�����";
		age = 0;
		std::cout << "������2\n";
	}
};
int main()
{
	Person p1("kim", 28);	// ������1 ȣ��
	Person p2;				// ������2 ȣ��
}



