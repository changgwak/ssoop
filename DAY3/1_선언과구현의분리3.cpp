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


/*
// 헤더 include 
#include <헤더파일>  // 컴파일러가 약속된 폴더에서 파일을 찾게됩니다.
					// 표준 헤더 파일 include  할때 사용

#include "헤더파일"  // 현재 디렉토리에서 파일을 찾게 됩니다.
					// 사용자가 만든 헤더 파일을 include 할때
*/