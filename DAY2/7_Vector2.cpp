#include <iostream>

int main()
{
	int cnt = 0;
	std::cout << "�л����� >> ";
	std::cin >> cnt;

	// 3. �Էµ� �л��� ��ŭ �ٽ� ������ �Է� �޾ƾ� �մϴ�.
//	int score[cnt]; // g++���� �Ϻ� �����Ϸ��� ���������� C++ ǥ�ؿ� ������ ����
					// visual studio ������ ����!

	// ����ð� ������ ������ �޸� �Ҵ��Ϸ��� "���� �Ҵ�" �ۿ� �ȵ˴ϴ�.
	// C   : malloc/free
	// C++ : new/delete

	int* score = new int[cnt]; // ���⼭�� ���� ��밡��

	for (int i = 0; i < cnt; i++)
	{
		std::cin >> score[i];
	}

	delete[] score;
}