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
	
//	Point()             { x=0; y=0; std::cout << "Point()"         << std::endl; } // 1
//	Point(int a, int b) { x=a; y=b; std::cout << "Point(int, int)" << std::endl; } // 2
};

int main()
{
	Point p1;		
	Point p2(1, 2); 

/*
	Point p3{ 1,2 };   
	Point p4 = { 1,2 };

	Point arr1[5];
	Point arr2[5] = { {1,2},{2,3} };


	Point* p; 

	p = (Point*)malloc( sizeof(Point) ); 
	free(p);							

	p = new Point; 
	delete p;

	p = new Point(1, 1); 
	delete p;
*/
}