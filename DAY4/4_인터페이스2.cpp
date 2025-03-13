#include <iostream>


// ī�޶� ���� ������ ����

// ī�޶� �����ڿ� ī�޶� ����� ���̿� ���Ѿ� �ϴ� ��Ģ�� ����
// ���� �մϴ�.

// ��Ģ : ��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�.
class ICamera
{
public:
	virtual void take() = 0;
};

// ���� ī�޶�� ���� ������ ��Ģ�� �ֽ��ϴ�.
// ����ڴ� ��Ģ��θ� ����ϸ� �˴ϴ�.

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

// ��� ī�޶� �����ڴ� ��Ģ��� ������ �մϴ�

class Camera : public ICamera
{
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera : public ICamera
{
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};
class UHDCamera : public ICamera
{
public:
	void take() { std::cout << "take UHD picture" << std::endl; }
};

int main()
{
	People p;

	Camera c;
	p.use_camera(&c);

	HDCamera hc;
	p.use_camera(&hc); 

	UHDCamera uhc;
	p.use_camera(&uhc);
}


