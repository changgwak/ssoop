// 인자로 전단된 값을 수정하지 않고, 읽기만 하려고 합니다
// 다음중 좋은 코드는 ?

void f1(int n) 
{ 
	int k = n; 
}

void f2(const int& n)
{
	// n 은 reference 지만 원리상 포인터 사용하는 경우가 대부분
	int k = n; // 따라서 이코드는
				// int k = *(n내부포인터) 이므로 접근시 오버헤드발생
}

int main()
{
	int x = 0;
	f1(x);
	f2(x);
}

// C++ 에서 함수 인자를 만드는 방법 - 반드시 외우고 규칙대로 하세요

// 1. 인자의 값을 읽기만 하려고 한다.(in parameter)
// 
// => 인자의 타입이 primitive type 인 경우(int, double등)
//    => call by value
//    => void foo(int value)

// => 인자의 타입이 user define type 인 경우(구조체, class)
//    => const reference
//    => void foo(const Rect& rc)


// 2. 인자의 값을 수정하려고 합니다.(in out paramter)
//    => 포인터   사용 : void inc1(int* p) { ++(*p);}
//    => 레퍼런스 사용 : void inc2(int& r) { ++r;}

// => 레퍼런스 권장. 안전하고, 가독성이 좋은 코드

