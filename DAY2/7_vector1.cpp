// 6_vector1
#include <iostream>

int main()
{
	// 1. 사용자 에게 2개의 정수를 입력 받고 싶습니다.
	//    그런데 입력된 값은 나중에 사용하기 위해 반드시 보관되어야 합니다
	// => 핵심 : 2개의 변수가 필요 하다.

	int a = 0;
	int b = 0;
	
	std::cin >> a;
	std::cin >> b;


	// 2. 이번에는 5개를 입력 받고 싶습니다. 
	// => 핵심 : 배열!
	// 
//	int a, b, c, d, e; // 5개 변수가 5개 이름 사용 - 반복문에서 사용안됨
	int x[5];   // 5개 변수가 "한개 이름+인덱스" 사용 - 반복문에서 사용가능

	for (int i = 0; i < 5; i++)
	{
		std::cin >> x[i];
	}
}