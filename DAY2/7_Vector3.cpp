#include <iostream>

int main()
{
	// 4. ����ڰ� -1�� �Է��Ҷ� ���� ��� �Է� �ް� �ͽ��ϴ�.
	//   ��, �Էµ� ��� ���� �����Ǿ� �־�� �մϴ�.

	int score[4];

	int count = 0;

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;

		score[count++] = n; 
	}
}