#include <string>

class Person1
{
	std::string name;
	int age;
public:
	// #1. ������ {} �ȿ��� ��� ����Ÿ�� ���� ���� ���
	Person1(const std::string& n, int a) 
	{
		// call std::string::string() <= ��, name �� ���ؼ� ����Ʈ ������ ȣ��

		name = n;	// ����. 
					// ��, ���ڵ�� 2���� �Լ� ȣ��� name �� ���� ���� ��
					// std::string name;
					// name = n; 
					// �� �ǹ�
		age = a;
	}
};

Person1 p1{ "kim", 20 };





class Person2
{
	std::string name;
	int age;
public:
	Person2(const std::string& n, int a) : name{n}, age{a}
	{
		// call std::string::string(n) <= ��, ���� �Ѱ� ������ ȣ��
		//								 ������ ȣ�� 1ȸ�� �ʱ�ȭ �Ѱ�
	}
};

Person2 p2{ "kim", 20 };


// ��� : �����ڿ��� ��� ����Ÿ�� �ʱ�ȭ �Ҷ�
// => ��� �ʱ�ȭ ����Ʈ���� �ϴ� ���� �����ϴ�!!
// => ������ �ƴ� ��¥ �ʱ�ȭ(�����ڷ� �ʱ�ȭ �Ѱ�)


// std::string �� ���� Ŭ�����̸��� �ƴ� alias �Դϴ�.
// => ���� Ŭ���� �̸��� std::basic_string �ε�, ������ ���ø� �Դϴ�.
//using string = std::basic_string<char, std::char_traits<char>, std::allocator<char>>;

