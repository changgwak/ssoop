#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

//	int score[4]; // �̷��� ����� �ʿ� ������ �����Ҽ� �����ϴ�.

	int size = 4;

	int* score = new int[size];

	int count = 0;



	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		score[count++] = n; 

		if (size == count)
		{
			// #1. ���ο� �޸�(����)�Ҵ�
			int* tmp = new int[size * 2];

			// #2. ���� ���۳����� ���ο� ���ۿ� ����
			memcpy(tmp, score, sizeof(int) * size);
				
				// score �� ����Ű�� �޸��� ������
				// tmp �� ����Ű�� �޸𸮷�
				// sizeof(int)*size ��ŭ ����

			// #3. ���� ���� ����
			delete[] score;


			// #4. score �� ���ο� ���۸� ����Ű����
			score = tmp;

			// #5. ũ�� ���� ����
			size = size * 2;

			// tmp �� {} ����� �ڵ� �ı�
		}
	}

	std::cout << "�Էµ� ����        : " << count << std::endl;
	std::cout << "�Ҵ�� �޸� ũ�� : " << size << std::endl;


	// ����Ŀ��� score �� ����Ű��  �޸� ����
	delete[] score;
}

// �����ؼ� 1,2, 3, ... 9 ���� �Է��� -1 �Է��� ������.. 