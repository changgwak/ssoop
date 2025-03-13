#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
// ���α׷����� �ʿ��� Ÿ���� ���� ���� �Ѵ�.

class MenuItem
{
	std::string title;
	int id;
//	std::string shortcut; // ���߿� �����Ҷ� �߰��� ������

public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) { }

	std::string get_title() const { return title; }


	// �޴� ���ý� ȣ���� �Լ�
	void command()
	{
		std::cout << get_title() << "�޴� ���õ�\n";

		_getch(); // �ƹ�Ű�� ������ ���� ��� ����
	}
};


int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("�쵿", 13);

	m1.command(); 
}
