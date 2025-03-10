﻿//  후위 반환 타입 - 42page

// 전통적인 함수의 모양
/*
int square(int a)
{
	return a * a;
}
*/

// C++11 에서 도입된 새로운 함수 모양
// => 후위 반환 타입(suffix return type) 이라는 문법
auto square(int a) -> int
{
	return a * a;
}


int main()
{
	square(3);
}
