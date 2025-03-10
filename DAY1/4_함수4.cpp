// 4_함수4
// C++ 함수의 특징 4. 함수 템플릿 - 39 page

// 중요 합니다. 반드시 정확히 알아 두세요

/*
int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
*/

// 타입만 다르고 구현이 유사(동일)한 함수가 여러개 필요 하면
// 1. 함수를 만들지 말고
// 2. 함수를 찍어내는 틀(template)을 만들면 됩니다.

template<typename T> 
T square(T a)
{
	return a * a;
}
int main()
{
	// 함수 템플릿을 사용하는 방법 #1. 타입인자를 명시적으로전달
	square<int>(3);		// 1. 컴파일 할때 int square(int)함수생성
						// 2. 이 위치는 "call square(int)" 기계어 생성

	square<double>(3.4);// 1. 컴파일 할때 double square(double)함수생성
						// 2. 이 위치는 "call square(double)" 기계어 생성

	// 함수 템플릿을 사용하는 방법 #2. 타입인자를 생략.
	square(3); // 컴파일러가 함수인자 3으로 T = int 로 추론
	square(3.4); // T= double 로 추론
}




