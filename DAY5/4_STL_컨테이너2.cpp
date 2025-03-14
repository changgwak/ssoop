// 4_STL_�����̳�1.cpp
#include <iostream>
#include <vector>

// 185 ~

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };

	v.resize(3); // ��� ���� ������� ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;	
	
	v.push_back(0); // ���� �Ѱ� �߰�
					// ���� size < capacity �����̹Ƿ�
					// �� �Լ��� ���� ������ �����մϴ�.
					// "not expensive"

	std::cout << v.size() << ", " << v.capacity() << std::endl;
												// 4, 5

	v.shrink_to_fit();	// ������ �޸𸮴� ������ �޶�.
						// ���� ������ "4�� �޸�" �Ҵ��ؼ� ���.
						// ���� "5�� �޸�"�� ����

	std::cout << v.size() << ", " << v.capacity() << std::endl; // 4, 4


	v.push_back(0);	// size == capacity �̹Ƿ� �޸� ���Ҵ� �ʿ�
					// �� ���� "expensive" �� �Լ�!

	std::cout << v.size() << ", " << v.capacity() << std::endl; 
					// size : 5
					// capacity : g++ �� 2��, vs �� 1.5


	v.clear();	// ���� �޸𸮸� �����ұ�� ? size �� 0���� �ұ�� ?

	std::cout << v.size() << ", " << v.capacity() << std::endl;

	v.shrink_to_fit(); // �̼��� �ʿ���� �޸� ����
						// ���� size == 0 �̹Ƿ�
						// ���۸� ������ ����

	std::cout << v.size() << ", " << v.capacity() << std::endl;
}
// �� ������ ���ؼ� capacity ��� ���� �˾� �μ���
// => ���̽��� list �� �����մϴ�.
// => ��κ��� �� �ִ� ����