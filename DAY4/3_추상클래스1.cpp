// 3_�߻�Ŭ���� - 157page ~
// �߻� Ŭ���� : ���� �����Լ��� �Ѱ� �̻� �ִ� Ŭ����
// Ư¡ : ��ü�� ����� ����.
// �ǵ� : �Ļ� Ŭ���� �����ڿ��� ��ӵ� �Լ��� �ݵ�� ������ �����ϴ� ��
class Shape
{
public:
	virtual void Draw() = 0; // ���� �����Լ�(pure virtual function)
							 // => �����ΰ� ����, "= 0" ���� ǥ��
};
class Rect : public Shape
{
public:
	// Shape ���� ���� �����Լ� Draw��
	// ������ �������� ������ Rect �� �߻� Ŭ����
	// ������ �����ϸ�        Rect �� �߻� �ƴ�. 
	void Draw() override {}
};

int main()
{
	Shape s; // error
	Rect  r; // ?
}


