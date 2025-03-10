// 4_함수5-1.cpp

void foo(int a)
{
}

? goo()
{
	return &foo;
}

int main()
{
	// 함수의 주소를 담는 함수 포인터 변수 만들기
	void(*f1)(int) = &foo;
}