// 11_constexpr3.cpp
#include <iostream>

// constexpr 함수 주의사항
// => 컴파일 시간에 할수 없는 작업이 있는 함수는
//    constepxr 이 될수 없습니다.
// => 화면 출력, 파일 작업, 메모리 할당, 네트워크 연결등	
constexpr int Add(int a, int b)
{
	std::cout << "Add\n";
	return a + b;
}

int main()
{

}