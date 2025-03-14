#include <iostream>

// 중요한 예제!!. 반드시 이해 하세요
class Counter
{
	int cnt = 0;
public:
	Counter increment()
	Counter& increment()
	{
		
		++cnt;
		return *this;
	}
	int get() const { return cnt; }

	Counter() {}
	Counter(const Counter& c) : cnt(c.cnt)
	{
		std::cout << "copy ctor\n";
	}
	~Counter()
	{
		std::cout << "~Counter\n";
	}
};
int main()
{
	Counter c;

	std::cout << "---------------------------------\n";
	c.increment().increment().increment();
	// increment(&c)
	std::cout << "---------------------------------\n";

	std::cout << c.get() << std::endl;
}
// 170page 마지막 단락에 별표하고 "임시객체5.cpp" 예제 참고 적어 두세요

// *this 반환시

// 값 반환 : 임시객체 생성됨
// 참조 반환 : 임시객체 생성안됨 - "임시객체5.cpp" 예제 참고
/*
int n = 0;
int* p = &n; // 포인터 변수는 주소로 초기화
int& r = n;  // 참조는 이름으로 초기화

int& r1 = p; // error. 참조 초기화를 포인터로 할수 없음
int& r2 = *p; // ok. p 가 포인터 이므로 *p 는 값!!!!

Point& r3 = this; // error
Point& r4 = *this; // ok
*/