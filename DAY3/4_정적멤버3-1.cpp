#include <iostream>

// static member data 특징 정리

class Car
{
	int color = 0;
public:
	static int cnt;	

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// #1. static 멤버 데이타는 외부 정의 필요. 초기화도 외부에서
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;

	std::cout << Car::cnt << std::endl;
}

