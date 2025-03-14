#include <iostream>

// 중요한 예제!!. 반드시 이해 하세요

class Counter
{
	int cnt = 0;
public:
	Counter increment()
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
	std::cout << "---------------------------------\n";

	std::cout << c.get() << std::endl;
}
// 170page 마지막 단락에 별표하고 "임시객체5.cpp" 예제 참고 적어 두세요
