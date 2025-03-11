#include <iostream>

// 3. 클래스 한개당 헤더와 소스 파일로 작성

// 빌드하려면 : 현재 소스와 Vector.cpp 가 빌드에 포함되어야 합니다.
#include "Vector.h"

int main()
{
	Vector v1(5);
	v1.at(0) = 7;
	std::cout << v1.at(0) << std::endl;
}


