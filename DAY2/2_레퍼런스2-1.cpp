int main()
{
	int n = 0;

	// pointer vs reference
	// ������ : ��� �ٸ� ������ �����ϱ� ���ؼ� ���
	int* p1 = &n;
	*p1 = 10;

	int& r1 = n;
	r1 = 10;

	// �����ʹ� �ʱⰪ�� �����Ҽ� ������
	// ���۷����� �����Ҽ� �����ϴ�.
	int* p2; // ok
	int* p3 = nullptr; // ok

	int& r2; // error. �ʱⰪ �ʿ�
	int& r3 = nullptr; // error. ������ �ƴ�.
}

void f1(int* p)
{
	// �����ʹ� 0�� �ɼ� �����Ƿ� �Ʒ�ó�� �ϴ� ���� ����
	if ( p != nullptr )
		*p = 10;
}
f1(nullptr); // �� �ڵ尡 �����ϹǷ� ���� if ���� �ʿ�

void f2(int& r)
{
	r = 10; // �׻� �����մϴ�. Ȯ�� ��� �˴ϴ�.
}
f2(nullptr); // error. �ݵ�� ���ڷ� ��ȿ�� ������ �����մϴ�.



