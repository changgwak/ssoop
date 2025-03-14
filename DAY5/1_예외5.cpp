class network_error {};

void f3()
{
	network_error e;
	throw e;		// 대부분 컴파일러는 e 객체의 복사본을 힙에 생성합니다.
}
void f2() 
{
	f3();
}
void f1()
{
	f2();
}
int main()
{
	try {f1();}
	catch (const network& e)
	{
		// catch 끝에서 힙에 있는 던져진 객체 e 를 delete 하는 코드가 추가됩니다

	}
}

// Python, C#, Java : 예외를 아주 많이 사용합니다.

// C++ 관례
// 간단한 오류에 대한 처리 : 함수 반환값으로 처리
// 심각한 오류(처리하지 않으면 종료되는 게 좋은 경우) : 예외 사용

// 많은 임베디드 개발에서 예외를 사용하지 않습니다.