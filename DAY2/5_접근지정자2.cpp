#include <iostream>
#include <string>


// struct : ���� ������ ������ ����Ʈ�� public 
// class  : ���� ������ ������ ����Ʈ�� private

// C++ : class �� struct �� �������� ���� �Ѱ��� �Դϴ�.
//		 ���������� ������ ����Ʈ�� ����

// C#, Java : class �� struct �� ������ �ٸ��ϴ�.
//			  �ش��� ������ ������

// Rust : class Ű���� ����, struct ������ ������ ����.


//struct Person
class Person
{
//private:				
	std::string name;	
	int  age;

public:			
	void set_age(int a)
	{
		if (a > 0 && a < 150)
			age = a;
	}
};

int main()
{
	Person p;


	p.set_age(-10);
}
