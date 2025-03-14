// 6_�˰���1
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

bool foo(int n) { return n % 3 == 0; }

int main()
{
	std::vector<int> v = { 1,2,9,4,3,6,7,3,9,10 };


	auto ret1 = std::find_if(v.begin(), v.end(), foo);

	// ���� ǥ����(lambda expression)
	// => C++11
	// => �͸��� �Լ��� ����� ����
	// => �Լ� �̸��� �����ϴ� ��ġ�� "�Լ� ���� ��ü"�� �����ϴ� ���

	// [] : ����ǥ������ ���۵��� �˸��� ��ȣ
	//		lambda introducer

	auto ret2 = std::find_if(v.begin(), v.end(),  
					[](int n) { return n % 3 == 0; } );


}