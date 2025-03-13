#include <iostream>


// 카메라를 먼저 만들지 말고

// 카메라 제작자와 카메라 사용자 사이에 지켜야 하는 규칙을 먼저
// 설계 합니다.

// 규칙 : 모든 카메라는 아래 클래스로 부터 파생 되어야 한다.
class ICamera
{
public:
	virtual void take() = 0;
};

// 실제 카메라는 아직 없지만 규칙은 있습니다.
// 사용자는 규칙대로만 사용하면 됩니다.

class People
{
public:
	void use_camera(ICamera* c) { c->take(); }
};

// 모든 카메라 제작자는 규칙대로 만들어야 합니다

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


