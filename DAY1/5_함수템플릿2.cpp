#include <iostream>

// #1. 인자 2개가 서로 다른 타입이 될수 있도록
//     타입인자를 2개 받는 템플릿
template<typename T1, typename T2>
? Add(T1 a, T2 b)
{
	return a + b;
}

int main()
{
	// 타입을 명시적 전달 해도 되고 생략해도 됩니다.
	std::cout << Add<int, double>(1, 2.2) << std::endl; 

	std::cout << Add(1, 2.2) << std::endl;
}




