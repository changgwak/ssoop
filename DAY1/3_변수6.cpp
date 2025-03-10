// 3_변수6.cpp   31 page 

struct Point
{
	int x, y;
};
int main()
{
	Point pt = { 1,2 };

	// C/C++ 에서 사용하던 전통적인 방식
	int x = pt.x;
	int y = pt.y;

	// #1. C++17 의 structure binding 문법
	auto [a1, a2] = pt;	// auto a1 = pt.x;
						// auto a2 = pt.y;

	// #2. auto 만 사용해야 합니다.
	int [b1, b2] = pt; // error

	// #3. 갯수가 동일해야 합니다.
	auto [c1, c2, c3] = pt; // error
	auto [c1] = pt;			// error

	// #4. 특정 멤버는 관심이 없을때,
	// C# 언어 : _ 사용
	// C++언어 : 
	auto [d1, _ ] = pt; // ok	auto d1 = pt.x;
						//		auto _  = pt.y; // ok _ 처음선언
	auto [e1, _ ] = pt; // error
					//		auto _ = pt.y; // error. 동일이름변수선언
					// 하지만, C++26 부터는 ok

//	int _ = 10; // ok 변수이름이 _
//	int _ = 20; // C++26 부터 이름이 _ 인 변수는 여러번 선언가능.
	//-----------------------------------------------------

	// #5. 구조체뿐아니라 배열도 됩니다.
	int arr[3] = { 1,2,3 };

	auto [e1, e2, e3] = arr;
}






// #참고
// visual studio 2022 는 기본 적으로 C++14로 컴파일 됩니다.
// C++17 이상의 기술을 사용하려면 옵션변경해야 합니다.