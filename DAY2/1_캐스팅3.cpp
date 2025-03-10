#include <iostream>

// reinterpret_cast 의 용도는 2가지 입니다.
// 1. 서로 다른 타입의 주소 변환
// 2. 정수 <=> 포인터 변환

int main()
{
	double d = 3.4;
	
	// #1. double* => int* 변환
	int* p1 = (int*)&d;	// ok. C 캐스팅의 거의 모든것을 허용
	int* p2 = static_cast<int*>(&d);		// error
	int* p3 = reinterpret_cast<int*>(&d);	// ok

	// #2. 정수 => 포인터
	int* p4 = 1000;	// error
	int* p5 = (int*)1000;	// ok
	int* p6 = static_cast<int*>(1000);	//  error
	int* p7 = reinterpret_cast<int*>(1000);	//  ok


	// #3. reinterpret_cast 는 위 용도위에는 사용할수 없습니다.
	// double => int
	int n1 = d; // ok. 하지만 경고
	int n2 = reinterpret_cast<int>(d); // error
							// 용도에 맞지 않는다!!
	int n3 = static_cast<int>(d); // ok 
}

