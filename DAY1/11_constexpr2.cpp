// constexpr �� 3���� �뵵
// 1. constexpr ��� - C++11  => 1������
// 2. constexpr �Լ� - C++11  => ���� ����
// 3. constexpr if   - C++17 => ��������.

// constexpr �Լ� : �Լ� �տ� constexpr �� ���� �Լ�
// �ǹ� : ���ڰ��� ������ �Ҷ� �˼� �ְ�
//        ��ȯ���� ���Ǵ� ��ġ�� ������ �Ҷ� �˾ƾ� �Ѵٸ�
//        �Լ� ������ ������ �Ҷ� �ش޶�� ��

constexpr int add(int a, int b)
{
	return a + b;
}

int main()
{
	int a = 1, b = 2;

	int x1[add(3, 4)];
	int x2[add(a, b)];

	int n1 = add(a, b);
}