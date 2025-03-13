#include <iostream>

// 함수는 동작이 있지만, 상태가 없습니다.
// => 그래서 수행중에 만들어진 데이타를 보관할 방법이 없습니다.
// => 그래서, 전역변수 등을 사용하게 됩니다.

// 0 ~ 9 사이의 "중복 되지 않은" 난수를 반환하는 함수 
int urand()
{
	return rand() % 10;
}

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << urand() << std::endl;
}