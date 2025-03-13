// 4_�������̽� - 159 page ~
#include <iostream>

class Camera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People
{
public:
	void use_camera(Camera* c) { c->take(); }
	void use_camera(HDCamera* c) { c->take(); }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); // ok
}
// �� �ڵ��� ������ 
// => OCP ����
// => ���Ȯ�忡 �����ְ�(Open), �ڵ� ������ ������(Close)�Ѵٴ��̷�(principle)

// ��ü���� ���α׷����� ���Ѿ� �ϴ� 5�� ��Ģ(���� ������ ��ǥ�� �̷� )
// 
// => SRP, OCP, LSP, ISP, DIP  => ���ڷ� SOLID ��� �մϴ�.
// 

