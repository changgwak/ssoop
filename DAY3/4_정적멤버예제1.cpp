#include <iostream>

// ���α׷����� ��¥ �� �ٷ�� ��찡 ����.
// => Date ��� Ÿ���� ���� ����

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