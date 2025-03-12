// 148 page ~
#include <iostream>

// �ٽ� : ��� ������ ����Ѵٸ�
//        ��� Ŭ������ �Ҹ��ڴ� "�ݵ�� virtual" �� �ϼ���
//        => ���� �Ҹ��� ��� �Ҹ��� ���� �Դϴ�.

class Base
{
public:
	Base()  {  }
	virtual ~Base() {  }
};
class Derived : public Base
{
public:
	Derived()  { std::cout << "Derived()" << std::endl; }
	~Derived() { std::cout << "~Derived()" << std::endl; }
};

int main()
{
//	Derived d;		// ok. ���� ����

//	Derived* p = new Derived;
//	delete p;		// ok. ���� ����
		

	// �Ʒ� �ڵ尡 ���� �Դϴ�.
	Base* p = new Derived;	// 1. sizeof(Derived) ũ�� �޸��Ҵ�
							// 2. ������ ȣ��

	delete p;	// 1. �Ҹ��� ȣ��  ( p->�Ҹ���() )
				// 2. �޸� ����
	//-------------------------------------
	// �Ҹ��� ȣ�⵵ �ᱹ �Լ��� ȣ�� �Դϴ�.
	// p->�Ҹ���()
	// 
	// 1. �Լ� ȣ���, static binding ���� dynamic binding ���� �����ؾ� �մϴ�.
	// 2. �����Ϸ��� p ��ü�� Ÿ�Ը� �˱� ������, 
	//    p �� Ÿ���� Base Ŭ������ �Ҹ��ڰ� �������� �ƴ��� �����մϴ�.

	// Base �Ҹ��ڰ� ������ �ƴϸ� : static binding 
	//							   ������ Ÿ������ ȣ���ϹǷ�
	//							   ~Base() �� ȣ���.!
	// 
	// Base �Ҹ��ڰ� ������ �̸�   : dynamic binding 
	//							    p�� ����Ű�� ���� �����ؼ� ȣ�� ����
	//								p�� Derived ��ü�� ����Ű��
	//								~Derived() ȣ��


}