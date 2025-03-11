// 아래 예제는 실전에서는 사용할이유가 없는 예제입니다.
// => 단지 문법 설명을 위해서
int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // ok. C 언어 스타일!!


	// 위 코드를 C++ 스타일 캐스팅으로 해보세요
//	double* p2 = ? &c;

	double* p2 = static_cast<double*>(&c); // error
	double* p2 = reinterpret_cast<double*>(&c); // error
									// 상수성 제거 안됨
	double* p2 = const_cast<double*>(&c); // error
									// 동일 타입만 가능.

	double* p2 = reinterpret_cast<double*>(const_cast<int*>(&c)); //ok
				// const int* => int* 로 상수성 제거 후
				// int* => double*    로 변경
				


}





