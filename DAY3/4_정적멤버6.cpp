#include <iostream>

// ������� 7�� �߰��ϰ� �����ϰ� ����
class Car
{
	int color = 0;
	static int cnt;
public:
	Car() { ++cnt; }
	~Car() { --cnt; }

	static int get_count() { return cnt; }
};
int Car::cnt = 0; 

int main()
{

}

