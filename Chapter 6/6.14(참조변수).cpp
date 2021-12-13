#include <iostream>
using namespace std;


void doSomething(int& n) // &�� �ѱ�� ���� ��ü�� �Ѿ�Ƿ� �����Ϳ� �޸� �ּ� ��ü ���� ������ �ʿ���� ���� �׳� n�� ��� callbyvalue
{
	cout << &n << endl;

	n = 10;
	cout << "In doSomething: " << n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main(void)
{
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	int& ref = value; // ������ �����̹Ƿ� ��� ex:101 ���� ���� �� �� ����

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;

	cout << "2��° ����" << endl;

	const int x = 5;
	//int& refx = x; // �����ϴ� ������ const�̸� �Ұ�����
	const int& refx = x;

	cout << "3��° ����" << endl;

	int n = 5;
	cout << n << endl;
	cout << &n << endl;

	doSomething(n);

	cout << n << endl;

	// �߿� ����
	cout << "4��° ����" << endl;

	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;

	return 0;
}