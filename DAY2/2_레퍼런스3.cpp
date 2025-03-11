// 1_레퍼런스3. 63 page
struct Data
{
	int buff[1024];
};

// call by value : 복사본 생성
//				   원본을 변경하지 않을 것이라는 약속의 의미도 있음.
//				   함수가 완벽히 분리 되므로 안전하다.
void foo(int n)
{
}

// 크기가 큰 타입을 인자로 받을때는 
// call by value 가 아닌 const reference 로 하는 것이 좋습니다.

// Data& : 복사본을 만들지 않겠다는 것(메모리 오버헤드 제거)
// const : 변경하지 않겠다는 약속 ( 안전성 향상)

//void goo(Data data) // Data 의 크기가 크기때문에 복사본의 오버헤드가 있습니다.
void goo(const Data& data)
{
	data.buff[0] = 10; // error. const 이므로!!
}



int main()
{
	Data data;
	goo(data);


	int x = 100;

	// foo 는 전달된 인자의 x 를 절대 변경하면 안된다.
	foo(x);

	// x 는 반드시 100 이어야 한다.
}
