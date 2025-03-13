// 아래 ?모두 채우세요

void f1(int *p1)
{
	// p1 은 1차 배열처럼 사용
	p1[0] = 10;
}
void f2(int (*p2)[2] )
{
	// p2 는 2차 배열처럼 사용
	p2[0][0] = 10;
}
void f3( int (*p3)[2][2])
{
	// p3 는 3차 배열 처럼 사용
	p3[0][0][0] = 10;
}
int main()
{
	int x[2] = { 1,2 };
	int y[2][2] = {1,2,3,4};
	int z[2][2][2] = {0}; // 모두 0으로 초기화

	f1(x);
	f2(y);
	f3(z);

	// 2차 배열에 대한 레퍼런스 만들기
	int(*p)[2][2] = &y;  // 포인터
	int(&r)[2][2] = y;  // 레퍼런스
}

// const char* s = "abc"  // "abc" const char[3];
						  // const char [3] => const char* 
//					

// const int* a = { 1, 2 , 3}
//				 int x[3]
//				 int x[3] => int* 
//				 이름없는 배열은 포인터로 암시적형변환되지 않는다.

/*
#include <stdio.h>

int main()
{
	// 모든 리터럴은 rvalue 이고 주소를 구할수 없습니다.
	// 그런데, 문자열 리터럴은 lvalue 이고 주소를 구할수 있습니다
	printf("%p\n", &"aaa"); // ok
	printf("%p\n", &10);    // error
}
*/