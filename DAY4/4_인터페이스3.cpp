#include <iostream>

// 용어 정리

// 인터 페이스 : 지켜야 하는 규칙 만 가진 경우
// 추상 클래스 : 지켜야 하는 규칙 + 다른 멤버도 있는 경우

// C#, Java 은 abstract, interface 라는 별도의 키워드가 있어서 명확하지만
// C++ 은 위처럼 구분하는데, 혼용될때도 있습니다.


// 규칙 : "모든 카메라는 아래 클래스로 부터 파생 되어야 한다." 라고 표현하지 말고
//       "모든 카메라는 아래 인터페이스를 구현해야 한다" 라고 표현합니다.

class ICamera
{
public:
	virtual void take() = 0;

	virtual ~ICamera() {} // 인터페이스도 결국 문법적으로는 기반 클래스이므로
						  // 소멸자는 가상함수로!!
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


