#include <stdio.h>

int main()
{
	int x[3] = { 1,2,3 };

	// �Ʒ� 2���� ��Ȯ�� �����ϼ���
	int(*p1)[3] = &x; // �迭�� �ּ�

	int* p2 = &x[0];  // �迭�� 1��° ����� �ּ�

	printf("%p, %p\n", p1, p1 + 1);
	printf("%p, %p\n", p2, p2 + 1);
}