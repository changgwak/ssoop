#include <iostream>

class Vector
{
private:
	// #1. 동적할당된 메모리를 관리하려면 아래 2개의 데이타가 필요 합니다.
	int* ptr;
	int  sz;

public:
	// #2. 생성자 실행후의 메모리 모양을 생각해 보세요
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = sz;
	}

};

int main()
{
	Vector v(4, 0); 

}