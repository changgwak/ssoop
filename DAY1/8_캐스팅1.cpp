// 10_캐스팅1.cpp    49 page
#include <iostream>

int main()
{
	int n = 3;

	// #1. int변수 주소를 double* 에 담기
//	double* p = &n; // error

	double* p = (double*)&n; // ok. 

	*p = 3.4; // 이순간의 메모리를 생각해 보세요

}
