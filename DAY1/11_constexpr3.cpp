// 11_constexpr3.cpp
#include <iostream>

// constexpr �Լ� ���ǻ���
// => ������ �ð��� �Ҽ� ���� �۾��� �ִ� �Լ���
//    constepxr �� �ɼ� �����ϴ�
// 
// => ȭ�� ���, ���� �۾�, �޸� �Ҵ�, ��Ʈ��ũ �����	

constexpr int Add(int a, int b)
{
	std::cout << "Add\n";
	return a + b;
}

int main()
{

}
// github.com/webkit ������  => �������� ����
// wekbit �������丮
// source/WTF/WTF ���� seconds.h ���� ������