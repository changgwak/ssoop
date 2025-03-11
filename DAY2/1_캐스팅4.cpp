// const_cast 
// => 객체의 상수성 제거

int main()
{
	int n = 10;	// n 자체는 상수 아님

	// int* => const int* 는 위험하지 않고,
	// 아주 좋은 코드 입니다.
	// 원본은 R/W 이지만 p1 을 통해서는 R 만 하겠다는 의도
	// 따라서, 이 변환은 암시적 변환이 허용 됩니다.
	const int* p1 = &n;

	// const int* => int* 로 변환. 
	// => 위험한 캐스팅. 암시적 변환 안됨
	// => 명시적 변환만 가능
//	int* p2 = p1; // error
	int* p3 = (int*)p1; // ok. C 스타일 캐스팅은 대부분 성공
	int* p4 = static_cast<int*>(p1); // error
	int* p5 = reinterpret_cast<int*>(p1); // error
					// => 다른 타입 주소 캐스팅은 가능하지만
					//    상수성 제거는 안됨

	int* p6 = const_cast<int*>(p1); // ok
					// 동일 타입의 상수성 제거를 위한 캐스팅!!!
}

// 결론 C++ 언어에서 캐스팅이 필요하면
// #1. 먼저 static_cast 를 사용하세요
// #2. 에러가 나오면 원인을 보고, 아래 2개중에 하나로 변경하세요
// => reinterpret_cast, const_cast

// #3. dynamic_cast 라는 것은 상속을 배워야 이해 가능합니다.