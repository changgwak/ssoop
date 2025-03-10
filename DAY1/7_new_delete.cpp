// 메모리할당 - 47 page
#include <iostream>

int main()
{
	// C 스타일
	int* p = (int*)malloc(sizeof(int) * 20);
	free(p);

	// C++ 스타일

	int* p1 = new int; // int 한개, 즉 4바이트 할당
	delete p1;		   // 메모리 제거

	int* p2 = new int[10]; // int 10개
	delete[] p2;		// 주의 배열할당한 경우 배열로 delete 사용
}

