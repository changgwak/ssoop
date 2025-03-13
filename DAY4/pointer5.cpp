#include <stdio.h>

int main()
{
	int x[3] = { 1,2,3 };

	// 아래 2줄을 정확히 구분하세요
	int(*p1)[3] = &x; // 배열의 주소

	int* p2 = &x[0];  // 배열의 1번째 요소의 주소

	printf("%p, %p\n", p1, p1 + 1); // 1000, 1012
	printf("%p, %p\n", p2, p2 + 1); // 1000, 1004

	// p1, p2 는 같은 주소를 가지고 있지만
	// 타입이 다릅니다. 따라서 연산자 사용시 결과가 달라집니다.

	*p1 = 20; // *(배열*) => "배열 = 20" // error
	(*p1)[0] = 20; // ok  *(배열*)[0] => 배열[0]  = 0"

	*p2 = 20; // *(int*) => "int = 20" 이므로 ok
	// p2[0] = 20;

	// #1. 즉, 같은 주소를 가진 포인터라도 타입이 다르면 연산자 적용 결과가 다릅니다.
	// #2. 1차 배열 x 가  있을때 아래 2개 포인터 중에 x와 같은 모양으로 사용하려면
	//     뭐가 좋을까요 ?

	int(*p3)[3] = &x;
	int* p4 = &x[0];

	x[0] = 10;

	(*p3)[0] = 10;
	p4[0] = 10;


	int* p5 = x; // 배열의 이름은 
				// 배열의 주소가 아니라
				// 배열의 1번째 요소의 주소로 
				// 암시적 형변환 된다.

	// 배열의 주소가 아니라 배열의 1번째 요소의 주소를 알아야
	// 배열과 동일하게 사용가능하다.
}


