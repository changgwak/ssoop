// 10 page 

//#include <stdio.h> // C언어용 헤더, printf 가 global 에만 있습니다.
#include <cstdio>    // C++이 다시 만든 C언어용 헤더
					 // 모든 C표준 함수가 global 과 "std::" 안에모두 있습니다.

// #1. C++에서는 대부분의 C헤더도 계속 사용가능합니다.
// #2. C++은 모든 C언어헤더를 다시 만들었습니다.
// <xxxx.h>			==>   <cxxxx>
// <stdio.h>		==>   <cstdio>
// <stdlib.h>		==>   <cstdlib>
// <string.h>       ==>   <cstring>
// <math.h>         ==>   <cmath>

int main()
{
	// printf 는 C 표준이지만 C++ 표준이기도 합니다

	printf("hello\n"); // ok

	std::printf("hello\n"); // ??
}
