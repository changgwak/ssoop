#include <iostream>
#include <string>
#include <vector>

// ���α׷����� �ʿ��� Ÿ���� ���� ���� �Ѵ�.

class MenuItem
{
	std::string title;
	int id;
//	std::string shortcut; // ���߿� �����Ҷ� �߰��� ������
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) { }

};

int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("�쵿", 13);

	m1.command(); 
}
