#include <iostream>

// C++ 은 용도에 따라 사용하는 4개의 캐스팅이 있습니다.


// 일반적인 용도 : static_cast

// 특수 목적 : reinterpret_cast, const_cast, dynamic_cast




// static_cast : 논리적으로 맞고 위험하지 않은 경우만 허용
//		    표준 타입끼리의 값 캐스팅
//          void*=> 다른 타입*,
//			상속관계의 캐스팅 등.
//          반드시 연관성이 있어야 한다


int main()
{
	double d = 3.4;
//	int    n = d;	// 에러는 아니지만, 경고 발생할수 있다.
	int    n = static_cast<int>(d);	// ok. 경고도 없음
				// square<int>(3) 와 유사합니다.

	// void* => int* 로 변경!
	// => 반드시 필요한 작업이다. static_cast허용!
//	int* p1 = malloc(100);		// error
	int* p2 = (int*)malloc(100);  // C 스타일 캐스팅
	int* p3 = static_cast<int*>(malloc(100));   // C++ 스타일 


	// int* => double* 로 변경
	double* p4 = (double*)&n; // ok. C-style 캐스팅은 허용
	double* p5 = static_cast<double*>(&n); // ok. C-style 캐스팅은 허용


}

