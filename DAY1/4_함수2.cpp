#include <cstdio>
// 37page. overloading 

// #1. 함수 오버로딩
// => 동일한 이름의 함수를 여러개 만들수 있다.
// => 단, 인자의 갯수나 타입이 달라서, 호출시 구별가능해야 한다.

// #2. C#, Java, Swift 등의 대부분의 언어가 지원하지만
//     C, Python 이 지원하지 않는 문법

int square(int a)
{
	return a * a;
}
double square(double a)
{
	return a * a;
}
int main()
{
	square(3);
	square(3.4);
}
