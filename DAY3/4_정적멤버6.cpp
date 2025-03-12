#include <iostream>

// 정적멤버 7도 추가하고 동일하게 복사
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

