#include <iostream>

// ������ ���� ��� : try ~ catch

int db_backup()
{
	if (1)		 
		throw 1; 

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
	catch (int e)
	{
		std::cout << "���� �߻�\n";

		// ������ ������ �ذ��Ҽ� ���ٸ� ���⼭ 
		// ����ڿ��� �˸��� ���� �ؾ� �մϴ�.
		std::exit(-1);

		// ���� ���� ������ ���α׷��� ��� ����˴ϴ�.
	}



	db_remove();
}

