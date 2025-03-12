#include <iostream>

class Car
{
	int color;
	static int cnt;
public:
	// 다음중 에러를 모두 골라 보세요
	// #1. static 멤버 데이타는 객체가 없어도 메모리에 존재
	// #2. static 멤버 함수는   객체가 없어도 호출 가능

	// 아래 foo 를 호출한것은 객체를 생성했다는 의미
	// 따라서 모두 ok
	void foo()
	{
		color = 0;	// 1.
		cnt = 0;	// 2.
		goo();		// 3.
		std::cout << this; // 4.
	}
	static void goo()
	{
		color = 0;	// 5. error.  객체가 있어야만 메모리 존재 this->color
		cnt = 0;	// 6. ok      cnt 는 객체가 없어도 메모리 존재
		foo();		// 7. error.  객체가 있어야 호출 가능한 함수
		std::cout << this; // 8. error. 객체 주소. 객체가 있어야 한다.
	}
};
int Car::cnt;

int main()
{
	Car::goo(); // 객체 없이 호출가능
}


// 핵심 
// static member function 에서는
// static memebr (data, function) 만 사용가능한다.