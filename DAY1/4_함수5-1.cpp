// 4_�Լ�5-1.cpp

void foo(int a)
{
}

? goo()
{
	return &foo;
}

int main()
{
	// �Լ��� �ּҸ� ��� �Լ� ������ ���� �����
	void(*f1)(int) = &foo;
}