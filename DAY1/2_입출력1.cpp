#include <cstdio>
#include <iostream> // std::cout, std::cin

// 13page

int main()
{
	int n = 10;

	// C style 입출력
	printf("n = %d\n", n); // C style

	scanf("%d", &n);	   // 입력
	// C++ style
	// 출력 : std::cout 사용
	// 특징 #1. "%d", "%f" 등의 포맷 지시어 사용안함
	//      #2. << 를 여러번 사용가능
	//      #3. 개행은 std::endl 또는 '\n'
	//		    std::endl 은 느리기때문에 '\n' 를 권장하는데 강의에서는 std::endl
	//			도 많이 사용
	// printf    : 함수
	// std::cout : 객체.(금요일날 원리 배웁니다. 지금은 사용법 위주로)
	std::cout << "n = " << n << std::endl;

	// 표준 입력
	// #1. >> 방향에 주의
	// #2. &n 이 아니라 n 
	std::cin >> n;

}
