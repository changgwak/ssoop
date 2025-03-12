#include <iostream>

// 프로그램에서 날짜 를 다루는 경우가 많다.
// => Date 라는 타입을 설계 하자

class Date
{
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } {}


};

int main()
{
	Date d(2025, 3, 12);
}