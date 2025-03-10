// nullptr1.cpp    24 page

int main()
{
	// 0의 정체 : 0은 정수지만 포인터로 암시적 형변환된다.
	int  n1 = 0; // ok
	int* p1 = 0; // ok

	int* p2 = n1; // ? 될까요 ? error.
				  // 리터럴 0은 포인터로 암시적 형변환 되지만 
				  // 0으로 초기화된 정수형 변수는 포인터로 변환될수 없다.

	// 0은 포인터가 아닌 정수라는 사실이 많은 혼란이 됩니다.

	// 그래서 C++11 부터는 포인터의미의 0을 추가했습니다.(키워드)
	int* p3 = nullptr; // ok 
//	int  n4 = nullptr; // error. nullptr 은 포인터 초기화에만 사용 가능.

	// C/C++의 모든 리터럴은 타입이 있습니다
	// 3 : int
	// 3.4 : double
	// nullptr : std::nullptr_t 라는 타입

	// 문법 : std::nullptr_t 타입은 모든 포인터 타입으로 암시적 형변환 된다.
	std::nullptr_t a = nullptr;
	int* p5 = a; // ok. 결국 a 가 nullptr


	// C#도 null 이라는 키워드가 있는데..
	// => C# 진영의 문법은 null 은 타입이 없는 특수한 키워드다
}
