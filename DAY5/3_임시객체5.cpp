#include <iostream>

// �߿��� ����!!. �ݵ�� ���� �ϼ���

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
// 170page ������ �ܶ��� ��ǥ�ϰ� "�ӽð�ü5.cpp" ���� ���� ���� �μ���
