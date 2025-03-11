#include <iostream>

class Vector
{
private:
	// #1. 동적할당된 메모리를 관리하려면 아래 2개의 데이타가 필요 합니다.
	int* ptr;
	int  sz;

public:
	Vector(int size, int value)
	{
		sz = size;
		ptr = new int[sz];

		for (int i = 0; i < sz; i++)
			ptr[i] = value;
	}
	// 생성자에서 동적할당한 메모리등이 있다면
	// 소멸자를 만들어서 삭제하는 것이 관례 입니다.
	~Vector()
	{
		delete[] ptr;
	}
};
int main()
{
	// #2. 아래 한줄이 실행시 메모리 모양을 생각해 보세요
	Vector v(4, 0); 

}

// 복습할때 반드시 위 코드실행시의 메모리 그림을 그리세요!!
// => 메모리 그림을 제일 중요 합니다.