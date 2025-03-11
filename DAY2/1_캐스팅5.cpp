// 아래 예제는 실전에서는 사용할이유가 없는 예제입니다.
// => 단지 문법 설명을 위해서
int main()
{
	const int c = 10;

	// c의 주소를 double* 에 담고 싶습니다.
	double* p1 = (double*)&c; // ok. C 언어 스타일!!

	// 위 코드를 C++ 스타일 캐스팅으로 해보세요
	double* p2 = ? &c;

}





