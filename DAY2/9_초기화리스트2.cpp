#include <string>

int main()
{
	// #1. 초기화 vs 대입
	// 초기화 : 변수 선언문에서 값을 넣는것
	// 대입   : 변수 선언후에  값을 넣는것

	int a = 3; // 초기화
	
	int b;
	b = 3;	// 대입

	// 초기화와 대입은 다른 개념이지만
	// primitive type 의 경우는 컴파일러 최적화를 통해서
	// 거의 동일한 기계어 코드 생성됩니다.


	// #2. user define 타입의 경우는 초기화와 대입은 완전히 다릅니다.

	std::string s1("hello"); // 초기화
							 // 생성자 1회 호출로 값을 넣은 것

	std::string s2;	// 1. 디폴트 생성자 호출
	s2 = "hello";	// 2. s2.operator=("hello") 라는 함수호출(5일차배우는함수)
					// => 즉, 2번의 함수 호출로 값을 넣은것

	// s1, s2 모두 "hello" 를 가지게 되지만, s1이 훨씬 효율적입니다.
	// 즉, 대입 보다는 초기화가 좋습니다.


	// #3. const 라 reference 는 초기화는 되지만 대입은 안됩니다.
	const int c1 = 10; // ok. 초기화

	const int c2;
	c2 = 10;	// error. 대입 안됨. 
}