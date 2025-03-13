#include <iostream>

// friend 79 page ~

class Bike
{
	int gear = 0;
public:
//	void setGear(int n) { gear = n; }

	// friend �Լ� : ��� �Լ��� �ƴ����� private ��� �� �����Ҽ� �ְ� �ش޶�� �ǹ�
	friend void fixBike();

	// #1. Set(), Get() �Լ��� ����ϸ� �Ǵµ� �� friend �Լ��� ���峪�� ?
	// => Set/Get �� �����ϴ� ���� ��� ������ ���� �����ϰ� �ϴ°�!
	// => friend �� Ư�� �Լ����Ը� ���� ������ �ִ°�

	// #2. ��� �Լ��� ����� ���� �ʳ��� ? �� �Ϲ��Լ��� �ϳ��� ?
	// => ��� �Լ��� �Ҽ� �������� �ֽ��ϴ�(������ ������)

	// #3. private ���� ���Ҵµ�, �ٽ� open �ϴ� ���� ������ �ʳ��� ?
	// => �׷���, ������ ���� ����
	// => C++ ���� �ִ� ����. �ٸ� ���� ����. 
};

void fixBike()
{
	Bike b;
	b.gear = 10;
}

int main()
{
	fixBike();
}