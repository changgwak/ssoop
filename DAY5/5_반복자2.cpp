// 5_�ݺ���1
#include <iostream>
#include <vector>
#include <list>

int main()
{
//	std::list<int>   s = { 1,2,3,4,5,6,7,8,9,10 };
	std::vector<int> s = { 1,2,3,4,5,6,7,8,9,10 };


	// 1. �ݺ����� ��Ȯ�� Ÿ��
	// => �׷��� C++11 ���Ķ�� �Ʒ� ó�� ���� ������
	// => �Ʒ� ó���ϸ� container ��ü�� �ڵ� �����ؾ� �մϴ�.
//	std::list<int>::iterator p1 = s.begin(); 

	// 2. auto ����ϼ���
	
	auto p1 = s.begin();

}

/*
namespace std
{
	// �̾ȿ� list �� �ݺ��� Ŭ������ �ֽ��ϴ�.
	class list_iterator
	{
	};

	template<typename T>
	class list
	{
	public:
		using iterator = list_iterator;
	};
}
*/