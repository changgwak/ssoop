#include <iostream>

// static member function

class Car
{
	int color = 0;
	static int cnt;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	// 멤버 함수 : 객체가 있어야만 호출가능하다.
	//				c1.get_count()
//	int get_count() const { return cnt; }


	// static 멤버 함수 : 객체가 없어도 호출가능한 함수
	//					  "클래스이름::함수이름()" 으로 호출
	//					  "Car::get_count()"
	//					  객체가 없이 호출 하므로 상수 멤버함수 라는 개념적용안됨
	static int get_count() { return cnt; }
};
int Car::cnt = 0; // private 멤버라도 외부 초기화는 가능

int main()
{
	std::cout << Car::get_count() << std::endl; // 0

	Car c1;
	Car c2;

	std::cout << Car::get_count() << std::endl; // 권장
	std::cout << c1.get_count() << std::endl;   // 권장 안함. 

}

