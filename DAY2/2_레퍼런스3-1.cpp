// ���ڷ� ���ܵ� ���� �������� �ʰ�, �б⸸ �Ϸ��� �մϴ�
// ������ ���� �ڵ�� ?

void f1(int n) 
{ 
	int k = n; 
}

void f2(const int& n)
{
	// n �� reference ���� ������ ������ ����ϴ� ��찡 ��κ�
	int k = n; // ���� ���ڵ��
				// int k = *(n����������) �̹Ƿ� ���ٽ� �������߻�
}

int main()
{
	int x = 0;
	f1(x);
	f2(x);
}

// C++ ���� �Լ� ���ڸ� ����� ��� - �ݵ�� �ܿ�� ��Ģ��� �ϼ���

// 1. ������ ���� �б⸸ �Ϸ��� �Ѵ�.(in parameter)
// 
// => ������ Ÿ���� primitive type �� ���(int, double��)
//    => call by value
//    => void foo(int value)

// => ������ Ÿ���� user define type �� ���(����ü, class)
//    => const reference
//    => void foo(const Rect& rc)


// 2. ������ ���� �����Ϸ��� �մϴ�.(in out paramter)
//    => ������   ��� : void inc1(int* p) { ++(*p);}
//    => ���۷��� ��� : void inc2(int& r) { ++r;}

// => ���۷��� ����. �����ϰ�, �������� ���� �ڵ�

