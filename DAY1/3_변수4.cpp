// 컴파일 + 실행 : Ctrl + F5

// 28 page ~

int main()
{
	int x[3] = { 1,2,3 };

//	int n = x[0];

	// #1. auto : 우변의 표현식으로 좌변의 타입을 결정해 달라는것
	//			  C++11 에서 추가
	//			  컴파일러가 결정하므로 실행시간 오버헤드 없음
	// 
	auto n = x[0];	// "int n = x[0]" 로 컴파일 시간에 결정


	// #2. decltype : () 안의 표현식의 타입을 결정해 달라. (C++11)
	decltype(n) d; // int d;

	// auto     : 일반 개발자도 아주 널리 사용하는 반드시 알아야 되는 문법
	// decltype : 일반 개발자 보다는 라이브러리 설계자를 위한 것


	// #3. auto 는 생각보다 어렵습니다.
	const int c = 10;

	auto a = c; // 1. int a = c;
				// 2. const int a = c;
}










