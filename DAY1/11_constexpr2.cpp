// constexpr 의 3가지 용도
// 1. constexpr 상수 - C++11  => 1번예제
// 2. constexpr 함수 - C++11  => 현재 예제
// 3. constexpr if   - C++17 => 마지막날.

// constexpr 함수 : 함수 앞에 constexpr 을 붙인 함수
// 의미 : 인자값을 컴파일 할때 알수 있고
//        반환값이 사용되는 위치가 컴파일 할때 알아야 한다면
//        함수 실행을 컴파일 할때 해달라는 것

constexpr int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[ add(3, 4) ]; // ok 함수 실행을 컴파일 할때 수행

//	int x2[ add(a, b) ]; // error. 배열 크기는 컴파일 할때 알아야 하는데
						 //        인자값을 컴파일 할때 알수 없다.

	int n1 = add(a, b); // ok. 실행시간에 함수 수행


	int n2 = add(1, 2); // 컴파일시간 ? 실행시간 ?
						// => 컴파일러에 따라 다를수 있다.

	const     int n3 = add(1, 2); // 컴파일시간 ? 실행시간 ?
						// => 컴파일러에 따라 다를수 있다.
	
	constexpr int n4 = add(1, 2); // 컴파일시간 ? 실행시간 ?
						// => 컴파일 시간
						// 즉, constexpr 의 의도는
						// 우변을 반드시 컴파일할때 계산해 달라는 요청!
						// const 는 실행할때 해도 된다는 의미
}


