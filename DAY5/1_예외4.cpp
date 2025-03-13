#include <iostream>
#include <string>

// 예외 전용 클래스

class file_not_found
{
public:
	std::string file_name;

	file_not_found(const std::string& s) : file_name(s) {}
};

// 아무 멤버가 없는 클래스도 나쁘지 않습니다.
// => 클래스 이름 자체가 설명
class network_error {};


int db_backup()
{
	if (1)
	{
		file_not_found e("a.txt");
		throw e;
	}

	if (2)	// 다른 이유로 실패
	{
		network_error e;
		return e;
	}

	return 100;
}
void db_remove() { std::cout << "remove db\n"; }

int main()
{
	try
	{
		int ret = db_backup();

		//....
	}
	catch (const file_not_found& e)
	{
		std::cout << "예외 발생\n";
	}
	catch (const network_error& e)
	{
	}
	catch (...)
	{
		std::cout << "위에서잡히지 않은 모든예외를 여기서처리\n";
	}

	db_remove();
}

