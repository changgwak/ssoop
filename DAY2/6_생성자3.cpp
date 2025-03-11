#include <iostream>


class Point
{
	int x;
	int y;
public:
	// 생성자
	// 1. 클래스 이름과 동일한 멤버 함수
	// 2. 반환 타입을 표기하지 않고, 인자는 없어도되고 있어도 된다.
	// 3. 여러개 만들수 있다.
	// 4. 객체를 생성하면 반드시 생성자가 호출된다.
	// 5. 사용자가 생성자를 한개도 만들지 않으면 컴파일러가 인자 없는 생성자 제공
	//    (인자 없는 생성자를 "디폴트 생성자" 라고 합니다.)
	
	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};

int main()
{
	// 6. C++98 스타일 객체 생성
	Point p1;		
	Point p2(1, 2); 

	// 7. C++11 부터는 {}도 사용가능. 
	Point p3{ 1,2 };   
	Point p4 = { 1,2 };
			// => Point 에 x, y 가 public 이고, 생성자가 없다면 구조체 초기화 구문
			// => Point 에 생성자가 있다면, 생성자 호출
			// => 생성자 없고, x, y 가 private 이면 error.


	// 8. 객체가 생성되면 반드시 생성자를 호출해야 합니다.
	Point arr1[5];						// 1번 생성자 5회 호출
	Point arr2[5] = { {1,2},{2,3} };	// 2번 생성자 2회, 1번생성자 3회


	Point* p; // 객체 생성 아님. 생성자 호출 안됨

	// 9. malloc vs new
	p = (Point*)malloc( sizeof(Point) ); // 8 바이트 메모리 할당.
									     // 생성자 호출 안됨
	free(p);	// 메모리 해지, 소멸자 호출안됨


	p = new Point; // 생성자 호출됨. 디폴트 생성자
	delete p;	   // 소멸자 호출	  

	p = new Point(1, 1); // 2번 생성자
	delete p;
}
// malloc : 메모리 할당
// new    : 객체 생성 ( 메모리 할당 + 생성자 호출)
