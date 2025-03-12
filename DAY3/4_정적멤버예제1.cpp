#include <iostream>

// ���α׷����� ��¥ �� �ٷ�� ��찡 ����.
// => Date ��� Ÿ���� ���� ����

class Date
{
	int year;
	int month;
	int day;
public:
	// #1. �ʱ�ȭ ����Ʈ���� ���ڿ� ��� �̸� �����ص� ��������ϴ�.
	Date(int year, int month, int day)
		: year{ year }, month{ month }, day{ day } {}

	// #2. setter/getter
	// => ���� getter �� ��� ��� �Լ���
	int get_day() const { return day; }
	void set_day(int d) { day = d; }   // ������ ��ȿ�� �˻��� ������
									   //  year, month �� �߰��� ������
									
	// #3. ���� ���� ���� �⺻�Լ��� �����ߴٸ�
	//     ����ڰ� �����ϰ� ����� �پ��� ��� �Լ��� �����ϼ���

};

int main()
{
	Date d(2025, 3, 12);
}