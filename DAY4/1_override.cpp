// override  145 page ~

class Shape
{
public:
	virtual void draw() {}
};

class Rect : public Shape
{
public:
	// #1. 가상함수를 override 할때는 virtual 은 표시하지 않아도 됩니다.
	// => 그래도 virtual 입니다.
//	virtual void draw()  {}
//	void draw() {}

	// #2. 가상함수 override 시 실수(오타) 가 있어도
	// => 에러가 아닙니다.
	// => 컴파일러는 새로운 가상함수를 추가했다고 생각하게 됩니다.
	// virtual void Draw() {}

	// #3. #2 가 많은 버그의 원인이 되었습니다
	// 그래서 C++11 에서 "override" 라는 키워드가 도입되었습니다
	// => 새로운 함수가 아니라, 기존 함수를 override 한다고 알리는 것
	virtual void Draw() override {}

};




int main()
{

}

