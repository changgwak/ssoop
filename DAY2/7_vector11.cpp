#include <iostream>

// C ��� 
// => vector ��� Ÿ���� �����ϴ�.
// => ���� �迭 �ʿ� �ϸ� "vector3.cpp" ó�� �Ź� ������ �մϴ�.

// C++, java, C# : ��� vector �ֽ��ϴ�. (��ü���� ���)
// python : list �ֽ��ϴ�.

#include <vector>



int main()
{
	std::vector<int> v; // ũ�Ⱑ 0�� vector

	int n = 0;

	while (1)
	{
		std::cin >> n;

		if (n == -1)
			break;
		
		v.push_back(n);
	}
	std::cout << "�Էµ� ����        : " << v.size() << std::endl;
	std::cout << "�Ҵ�� �޸� ũ�� : " << v.capacity() << std::endl;
}
// �� �ڵ尡 
// vector3.cpp �� ������ ��� ����
// "std::vector" ��� "Ÿ��"�� �����Ƿ� "vector3.cpp" ���� �ξ� �����մϴ�.
// 1,2,3....9, 10 �Է��� -1 �Է�
// 1
// 2 => 3 => 5 => 6 => 9 => 13