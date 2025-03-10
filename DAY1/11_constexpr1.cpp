// constexpr1
// 69 page

// 프로그래밍 세계에게 "상수" 라는 용어가 가진 2가지 의미

// #1. 실행시간에 변경할수 없다 - immutable, readonly

// #2. 컴파일 시간에 값을 알수있다. - compile time constant
//									compile time expression
int main()
{
	int n = 3;

	const     int c1 = 3;
	const     int c2 = n;

	constexpr int c3 = 3;
	constexpr int c4 = n;

}