// 7_�����Լ�1  144 page ~
//			   150 page
#include <iostream>

class Animal
{
public:
	// non-virtual : C++�⺻ ���ε�(static binding)�϶�� �ǹ�
	//				 ������ Ÿ������ �Լ� ����
	void Cry1() { std::cout << "Animal Cry1" << std::endl; } 


	// virtual : dynamic binding �϶�� �ǹ�
	//			 ����ð��� ��ü�� ������ �����ؼ� ȣ�� ����
	virtual void Cry2() { std::cout << "Animal Cry2" << std::endl; } 
};

class Dog : public Animal
{
public:
	void Cry1() { std::cout << "Dog Cry1" << std::endl; }  
	
	virtual void Cry2() { std::cout << "Dog Cry2" << std::endl; }
};

int main()
{
	Animal a; 
	Dog    d; 

	Animal* p = &d;

	p->Cry1();  // static binding
	p->Cry2();  // dynamic binding
}




