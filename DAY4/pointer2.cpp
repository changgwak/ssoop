// pointer2.cpp

void foo(int* p)
{
	// main 에서 할당한 메모리 n 을 여기서 접근하고 싶다.
	// => 이름은 자신을 선언한 {} 안에서만 사용가능하다.
	// => main 에서 주소를 보내주고, 포인터 변수로 받는 방법 밖에 없다
	*p = 20;
}

int main()
{
	int n = 10;
	
	foo(&n);
}