#include <iostream>

// #1. decltype : 아래와 같은 템플릿의 반환 타입 만들때 사용하기 위한 키워드
// => 아래 코드는 왜 ?? 에러 일까요 ?
/*
a = 20; // error. 선언전에 사용
int a = 10;
a = 20; // ok. 선언후에사용

// 아래 코드는 결국 위 코드처럼, a, b 를 선언전에 사용하고 있는 것
// => 해결책은 반환 타입을 함수 () 뒤에 놓으면 됩니다.
template<typename T1, typename T2>
decltype(a + b) Add(T1 a, T2 b)
{
	return a + b;
}
*/

// 아래 같은 라이브러리를 설계하려면 "후위 반환 타입" 문법이 필요했습니다.
template<typename T1, typename T2>
auto Add(T1 a, T2 b) -> decltype(a + b)
{
	return a + b;
}

int main()
{
	std::cout << Add(1, 2.2) << std::endl;


}




