#include <iostream>

// static member data Ư¡ ����

class Car
{
	int color = 0;
public:
	static int cnt;	

	Car() { ++cnt; }
	~Car() { --cnt; }
};
// #1. static ��� ����Ÿ�� �ܺ� ���� �ʿ�. �ʱ�ȭ�� �ܺο���
int Car::cnt = 0;

int main()
{
	Car c1;
	Car c2;

	std::cout << Car::cnt << std::endl;
}

