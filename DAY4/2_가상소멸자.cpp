// 148 page ~
#include <iostream>

class Base
{
public:
	Base()  {  }
	~Base() {  }
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
	Base* p = new Derived;
	delete p;	


}