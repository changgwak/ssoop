#include <iostream>

// ��� ����

// ���� ���̽� : ���Ѿ� �ϴ� ��Ģ �� ���� ���
// �߻� Ŭ���� : ���Ѿ� �ϴ� ��Ģ + �ٸ� ����� �ִ� ���

// C#, Java �� abstract, interface ��� ������ Ű���尡 �־ ��Ȯ������
// C++ �� ��ó�� �����ϴµ�, ȥ��ɶ��� �ֽ��ϴ�.


// ��Ģ : "��� ī�޶�� �Ʒ� Ŭ������ ���� �Ļ� �Ǿ�� �Ѵ�." ��� ǥ������ ����
//       "��� ī�޶�� �Ʒ� �������̽��� �����ؾ� �Ѵ�" ��� ǥ���մϴ�.

class ICamera
{
public:
	virtual void take() = 0;

	virtual ~ICamera() {} // �������̽��� �ᱹ ���������δ� ��� Ŭ�����̹Ƿ�
						  // �Ҹ��ڴ� �����Լ���!!
};



class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
};


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


