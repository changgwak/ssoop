#include <iostream>
#include <vector>

class People
{
	std::string name;
	int age;
public:
	People(const std::string& name, int age)
		: name(name), age(age)
	{
	}
};

// �Ʒ� �ּ���� �ڵ� �ۼ��� ������
// 1. People ���� �Ļ��� Student ���弼��
// 2. int id ��� ����Ÿ �߰��ϼ���
// 3. Student ������ ����� ������
// 4. main ���� Student ��ü ������ ������

class Student : public People
{
	int id;
public:
	// �Ʒ� ó�� ����� People ����Ʈ �����ڰ� �����Ƿ� ���� �Դϴ�.
//	Student(int id) : id(id) {} // Student(int id) : id(id) { call People::People()} 

	// �ذ�å  : �Ʒ� ó�� People �� �����ڸ� ��������� ȣ��
	Student(const std::string& name, int age, int id) 
		: People(name, age), id(id) {}
};

int main()
{
	Student s1("kim", 30, 99);
	Student s2("lee", 20, 88);

}



