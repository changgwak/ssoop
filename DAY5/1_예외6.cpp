#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v(4, 0);

	// [] ������ : �ε����� �߸��Ǿ����� Ȯ�ξ���. �߸������ϸ� ����������ɼ�����
	// at()�Լ�  : �ε����� �߸��Ǹ� ���� �߻�
//	v[10] = 10;			// ptr[idx] = value;
//	v.at(10) = 10;		// if ( idx > sz ) throw std::out_of_range 

	try
	{
		//	v[10] = 10;			
		v.at(10) = 10;
	}
	catch (const std::out_of_range& e)
	{
		std::cout << "���ܹ߻�\n";
	}

}