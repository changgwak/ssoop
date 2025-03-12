#include <iostream>

// 프로그램에서 날짜 를 다루는 경우가 많다.
// => Date 라는 타입을 설계 하자

class Date
{
	int year;
	int month;
	int day;
public:
	// #1. 초기화 리스트에서 인자와 멤버 이름 동일해도 상관없습니다.
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } {}

	// #2. setter/getter
	// => 주의 getter 는 상수 멤버 함수로
	int get_day() const { return day; }
	void set_day(int d) { day = d; }   // 복습시 유효성 검사해 보세요
									   //  year, month 도 추가해 보세요
									
	// #3. 이제 위와 같은 기본함수를 제공했다면
	//     사용자게 유용하게 사용할 다양한 멤버 함수를 제공하세요

};

int main()
{
	Date d(2025, 3, 12);
}