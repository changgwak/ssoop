#include <iostream>

// ��ü���� ���α׷��ֿ����� ���� ó��
// => ����(exception) ��� ��� ���

// #1. �Լ����� ������ �߻��ϸ� ���ܸ� "�����ϴ�(throw)"

int db_backup()
{
	if (1)
		throw 1; // ���� ������

	return 100;
}

void db_remove() { std::cout << "remove db\n"; }

int main()
{
	int ret = db_backup();

	//	if (ret == -1) {}

	db_remove();
}

