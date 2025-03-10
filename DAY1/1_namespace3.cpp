// 1_namespace3.cpp - 9page 내용
// 
#include <algorithm>
using namespace std;

// #1. C++ 표준의 모든 요소는 "std" 라는 namespace 안에 있습니다.
// #2. 

int count = 10;

int main()
{
//	int n = min(3, 2); // C++ 표준 함수. algorithm 헤더 필요
					   // error. std:: 필요
	int n = std::min(3, 2); // ok

	count = 20; // 왜 에러날까요 ?? 내가 만든 전역변수를 접근하는데 !!!
				// C++ 표준에 이미 std::count() 함수가 있습니다.
				// using namespace std 때문에 std:: 이름없이도 접근가능하므로
				// 전역변수 이름과 C++ 표준 함수가 이름 충돌 발생. 
				// 되도록 "using namespace std" 사용하지 마세요
}
// g++ 1_namespace3.cpp 로 빌드해서 에러 나오는거 확인해 보세요.