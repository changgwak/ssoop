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
		std::cout << get_title() << "¸Þ´º ¼±ÅÃµÊ\n";
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

	void command()
	{
		while (1)
		{
			system("cls"); 

			auto sz = v.size();

			for (int i = 0; i < sz; i++)
			{
				std::cout << i + 1 << ". " << v[i]->get_title() << std::endl;
			}
			std::cout << sz + 1 << ". Á¾·á\n";

			std::cout << "¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä >> ";

			int cmd;
			std::cin >> cmd;


			if (cmd == sz + 1) 
				break;

			if (cmd < 1 || cmd > sz + 1) 
				continue;



			v[cmd - 1]->command(); 
		}

	}
};



int main()
{
	MenuItem m1("ÂüÄ¡   ±è¹ä", 11);
	MenuItem m2("¼Ò°í±â ±è¹ä", 12);
	MenuItem m3("µ·±î½º ±è¹ä", 13);

	PopupMenu kimbab("±è¹ä·ù");
	kimbab.add(&m1);
	kimbab.add(&m2);
	kimbab.add(&m3);
	//----------------------------------------------
	MenuItem m8("¶ó¸é", 21);
	MenuItem m9("¿ìµ¿", 22);

	PopupMenu pm("¿À´ÃÀÇ Á¡½É ¸Þ´º");
	pm.add(&kimbab); // <== ÇÙ½É. Àß »ý°¢ÇØ º¸¼¼¿ä
	pm.add(&m8);
	pm.add(&m9);

	pm.command(); 
}
