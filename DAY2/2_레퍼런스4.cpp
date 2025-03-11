// 1_레퍼런스4.   65 page

int x = 0;
int  foo() { return x; } // x가 아닌 x의 값 "0" 을 반환 한것
int& goo() { return x; } // x의 값이 아닌 x의 별명을 반환하겠다는 것

int main()
{
	int v1 = 10, v2 = 20;

	// #1. lvalue, rvalue 
	// lvalue : 데이타 메모리가 할당되고, 이름이 존재하는 것
	v1 = 20;	// ok		// v1 : lvalue, 등호에 왼쪽에 올수있는 표현식
	20 = v1;	// error	// 20 : rvavlue, lvalue 가 될수 없는것


	// #2. 함수가 reference 를 반환하면 함수 호출을 등호의 왼쪽에 놓을수 있다.
	// => "함수 호출이 lvalue 가 될수 있다" 라고 표현
	foo() = 20; // error.  "0 = 20" 의 의미
	goo() = 20; // ok      "x = 20" 의 의미
}
