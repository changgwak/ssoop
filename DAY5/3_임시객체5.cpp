#include <iostream>

// �߿��� ����!!. �ݵ�� ���� �ϼ���
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
// 170page ������ �ܶ��� ��ǥ�ϰ� "�ӽð�ü5.cpp" ���� ���� ���� �μ���

// *this ��ȯ��

// �� ��ȯ : �ӽð�ü ������
// ���� ��ȯ : �ӽð�ü �����ȵ� - "�ӽð�ü5.cpp" ���� ����
/*
int n = 0;
int* p = &n; // ������ ������ �ּҷ� �ʱ�ȭ
int& r = n;  // ������ �̸����� �ʱ�ȭ

int& r1 = p; // error. ���� �ʱ�ȭ�� �����ͷ� �Ҽ� ����
int& r2 = *p; // ok. p �� ������ �̹Ƿ� *p �� ��!!!!

Point& r3 = this; // error
Point& r4 = *this; // ok
*/