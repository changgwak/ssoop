#include <iostream>

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
};

int main()
{
	Date d(2025, 3, 12);

	Date d2 = d1.after_days(1000); // 1000일 뒤의 날짜를 알고 싶다.
}