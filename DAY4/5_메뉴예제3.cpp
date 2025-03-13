#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

class MenuItem
{
	std::string title;
	int id;
public:
	MenuItem(const std::string& title, int id)
		: title(title), id(id) {
	}

	std::string get_title() const { return title; }

	void command()
	{
		std::cout << get_title() << "�޴� ���õ�\n";
		_getch(); 
	}
};

class PopupMenu
{
	std::string title;
	std::vector<MenuItem*> v;
public:
	PopupMenu(const std::string& title) : title(title) {}

	void add(MenuItem* m) { v.push_back(m); }
	
	// �˾��޴��� �����Ҷ� ���� - �ٽ�!
	void command()
	{

	}
};



int main()
{
	MenuItem m1("���", 11);
	MenuItem m2("���", 12);
	MenuItem m3("�쵿", 13);
		
	PopupMenu pm("������ ���� �޴�");
	pm.add(&m1);
	pm.add(&m2);
	pm.add(&m3);

	pm.command(); // �˾��޴� ���ý� ������ ������ ������
}
