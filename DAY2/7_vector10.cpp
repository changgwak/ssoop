#include <iostream>
#include <vector> // �� �ȿ� C++ ǥ�� vector �� �ֽ��ϴ�.
				  // ������ �츮�� ����Ͱ� �����մϴ�.

// STL
// => Standard Template Library
// => C++ ǥ�� ���̺귯���� ��κ� template �̶� �̷��� �θ��ϴ�.

int main()
{
	std::vector<int> v1(4, 0);

//	v1[0] = 10; // v1.operator(0)[] = 10 �Դϴ�
				// => 5���� ���� ������ �����Ƕ�� ����

	v1.at(0) = 10;	 // ���� ����. �츮�� ����Ͱ� ����

	v1.resize(8);

	v1.push_back(0); // ���� �Ѱ� �߰�, �̼��� size �� 9��
					 // ������ �޸� ��ü�� ũ��� g++ 2��
					 // vc : 1.5��

	std::cout << v1.size() << std::endl; // 9��
	std::cout << v1.capacity() << std::endl; // 12��
											 // g++ �� 16

	v1.push_back(0); // ���� ���´� size < capacity �̹Ƿ�
					// ���ο� �޸� �Ҵ� �ʿ� �����ϴ�.
					// ���� ������ �����մϴ�.
}