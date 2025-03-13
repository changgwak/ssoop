#include <iostream>
#include <string>
#include <vector>

// 프로그램에서 필요한 타입을 먼저 설계 한다.

class MenuItem
{
	std::string title;
	int id;
//	std::string shortcut; // 나중에 복습할때 추가해 보세요
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) { }

};

int main()
{
	MenuItem m1("김밥", 11);
	MenuItem m2("라면", 12);
	MenuItem m3("우동", 13);

	m1.command(); 
}
