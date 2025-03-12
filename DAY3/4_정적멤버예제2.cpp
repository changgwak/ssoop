#include <iostream>


int days[12] = { 30,28,30,30,30,30,30, 30,30,30,30,30 }; // 나중에 수정하세요

class Date
{
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } {
	}
	int get_day() const { return day; }
	void set_day(int d) { day = d; }  
	//---------------------------------------

	Date after_days(int ds)
	{
		Date tmp(year, month, day + ds); // 잘못된 구현
										 // 복습시 제대로 구현해 보세요
		return tmp;
	}
};

int main()
{
	Date d(2025, 3, 12);

	Date d2 = d1.after_days(1000); // 1000일 뒤의 날짜를 알고 싶다.
}