#include <iostream>



class Date
{
	int year;
	int month;
	int day;

	// 아래 같은 데이타는 
	// => 날짜 관련 데이타 이지만
	// => 특정 날짜 객체와 관련이 있는 것은 아닌
	// => Date 라는 클래스와 관련 있는 데이타.
	// => 이런 데이타를 static 멤버로 해야 합니다.
	inline static int days[12] = { 30,28,30,30,30,30,30, 30,30,30,30,30 }; // 나중에 수정하세요


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


	// 5월이 몇일까지 있는지 알고 싶다. - 복습시 구현해 보세요
	// 방법 #1.
	Date d3(2025, 5, 1);
	int n1 = d3.days_in_month(5);

	// 방법 #2.
	int n2 = Date::days_in_month(5);


}