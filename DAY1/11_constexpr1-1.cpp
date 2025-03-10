int main()
{
	int sz1 = 10;
	const int sz2 = sz1;
	const int sz3 = 10;
	constexpr int sz4 = 10;

	int x1[10];  // ok
	
	int x2[sz1]; // 크기로 변수 전달 ?
				 // C89 문법 : error
				 // C99 문법 : ok
				 // C11 문법 : 표준에서 컴파일러에 따라 다를수있다고 정의
		// C++ : error. 표준에서 배열의 크기는 컴파일 시간에 알아야 한다고 정의
		// 그런데, g++, clang 은 확장 문법으로 허용!!
		// visual studio 는 error.

	int x3[sz2]; // error. runtime constant!! 컴파일 할때 알수 없다
	int x4[sz3]; // ok. 컴파일러가 값을 알수 있다
	int x5[sz4]; // ok.
}
// 그럼? const 도 literal 로 초기화 하면
// => 컴파일 시간 상수로 사용가능한데 ??
// => 왜 constexpr 이 따로 필요한가요 ??