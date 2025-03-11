// 5_생성자1.cpp - 80 page
#include <iostream>
#include <string>

class Person
{
private:
	std::string name;
	int  age;
public:
	// 생성자는 여러개 만들어도 됩니다.
	Person(const std::string& n, int a)
	{
		name = n;
		age = a;
		std::cout << "생성자1\n";
	}
	Person()
	{
		name = "이름없음";
		age = 0;
		std::cout << "생성자2\n";
	}
};
int main()
{
	Person p1("kim", 28);	// 생성자1 호출
	Person p2;				// 생성자2 호출
}



