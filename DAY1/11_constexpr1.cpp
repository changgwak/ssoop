// constexpr1
// 69 page

// 프로그래밍 세계에게 "상수" 라는 용어가 가진 2가지 의미
// => 대부분의 언어에 적용되는 개념
// 
// #1. 실행시간에 변경할수 없다 - immutable, readonly
// => C/C++ 의 const 키워드
// => 컴파일 시간에 값을 알필요는 없다.
// => 따라서, "초기값으로 변수도 사용가능"
// 
// #2. 컴파일 시간에 값을 알수있다. - compile time constant
//									compile time expression
// => C++11 에서 추가된 constexpr 
// => 반드시 컴파일 할때 초기값을 알아야 한다.
// => 즉, 초기값으로 변수 사용안됨 <= 핵심

// 왜 ? 컴파일 시간에 값을 아는 것이 중요한가요 ?
// => 1. 거의 완벽한 최적화(모든 연산을 컴파일 시간에 수행가능)
// => 2. C++은 일부 문법이 컴파일 시간에 값을 알아야 합니다.
//		=> 배열의 크기, 템플릿 인자등.

int main()
{
	int n = 3;

	const     int c1 = 3; // ok
	const     int c2 = n; // ok

	constexpr int c3 = 3; // ok
	constexpr int c4 = n; // error

}