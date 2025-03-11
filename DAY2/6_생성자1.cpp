// 5_생성자1.cpp - 80 page
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
	// #1. 모든 멤버 데이타가 public 있으면
	// => 결국 C 언어의 구조체와 동일합니다.
	// => 따라서, 아래처럼 구조체 초기화 구문으로 초기화 가능합니다.
	// Person p = { "kim", 28 };

	// #2. 멤버 데이타가 private 에 있다면 위처럼 초기화 안됩니다.
	// => 멤버 함수로 초기화 해야 합니다.
	Person p;
	p.init("kim", 28);

}



