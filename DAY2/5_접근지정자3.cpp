#include <iostream>
#include <string>

// C++ ��Ÿ��
class Person
{
private:				
	std::string name;
	int  age;

public:
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}

private:

public:
};

// C#, Java, Swift ���� C++�� ������ ��κ��� ���
// => ��� ���� ���������� ǥ��
class Person
{
	private std::string name;
	private int  age;

	public void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};