// constexpr1
// 69 page

// ���α׷��� ���迡�� "���" ��� �� ���� 2���� �ǹ�

// #1. ����ð��� �����Ҽ� ���� - immutable, readonly

// #2. ������ �ð��� ���� �˼��ִ�. - compile time constant
//									compile time expression
int main()
{
	int n = 3;

	const     int c1 = 3;
	const     int c2 = n;

	constexpr int c3 = 3;
	constexpr int c4 = n;

}