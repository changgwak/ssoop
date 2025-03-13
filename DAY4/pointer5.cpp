#include <stdio.h>

int main()
{
	int x[3] = { 1,2,3 };

	// 아래 2줄을 정확히 구분하세요
	int(*p1)[3] = &x; // 배열의 주소

	int* p2 = &x[0];  // 배열의 1번째 요소의 주소

	printf("%p, %p\n", p1, p1 + 1);
	printf("%p, %p\n", p2, p2 + 1);
}