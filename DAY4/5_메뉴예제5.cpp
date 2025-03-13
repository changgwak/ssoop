#include <iostream>
#include <string>
#include <vector>
#include <conio.h>


// C 언어는 메모리 구조(포인터등)를 이해하기 위해 "메모리 그림"을 그리며 공부합니다.

// 객체지향 디자인을 이해 하려면 "클래스 구조(Diagram)" 을 그려야 합니다.!!


class BaseMenu
{
	std::string title;
public:
	BaseMenu(const std::string& title)
		: title(title) {}

	virtual ~BaseMenu() {}

	std::string get_title() const { return title; }

	// 모든 메뉴는 선택될수 있다(command)
	// => 파생 클래스의 공통의 특징은 기반 클래스에도 있어야 한다.
	virtual void command() = 0;
};


class MenuItem : public BaseMenu
{
	int id;
public:
	MenuItem(const std::string& title, int id)
		: BaseMenu(title), id(id) {}

	void command()
	{
		std::cout << get_title() << "메뉴 선택됨\n";
		_getch();
	}
};

class PopupMenu : public BaseMenu
{
	std::vector<BaseMenu*> v;
public:
	PopupMenu(const std::string& title) : BaseMenu(title) {}

	void add(BaseMenu* m) { v.push_back(m); }

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
			std::cout << sz + 1 << ". 종료\n";

			std::cout << "메뉴를 선택하세요 >> ";

			int cmd;
			std::cin >> cmd;


			if (cmd == sz + 1)
				break;

			if (cmd < 1 || cmd > sz + 1)
				continue;



			v[cmd - 1]->command(); // 다형성. polymorphism
						// v[cmd-1] 이 MenuItem 인지
						//			   PopupMenu 인지에 따라 다르게 동작
		}

	}
};



int main()
{
	MenuItem m1("참치   김밥", 11);
	MenuItem m2("소고기 김밥", 12);
	MenuItem m3("돈까스 김밥", 13);

	PopupMenu kimbab("김밥류");
	kimbab.add(&m1);
	kimbab.add(&m2);
	kimbab.add(&m3);
	//----------------------------------------------
	MenuItem m8("라면", 21);
	MenuItem m9("우동", 22);

	PopupMenu pm("오늘의 점심 메뉴");
	pm.add(&kimbab); 
	pm.add(&m8);
	pm.add(&m9);

	pm.command();
}
