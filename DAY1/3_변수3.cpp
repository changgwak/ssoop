#include <iostream>

struct Point
{
	int x, y;
};
void foo(int n)    {} 
void goo(Point pt) {}

int main()
{
	Point p = { 1,2 };

	foo(3); // int n = 3
	foo({3}); // int n = {3}

	goo({1,2});  // Point pt = {1,2}
}
// 아래 와 같은 표기법도 가능
Point hoo() 
{ 
	return {1,2};
}






