#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "�Լ� �ȿ���: " << y << " " << &y << endl;
}

int main(void)
{
	int x = 6;

	doSomething(5);

	cout << "���� �ȿ���: " << x << " " << &x << endl;

	doSomething(x);
	doSomething(x + 1); // ���� ���޵ǹǷ� ���� �ּ� ���� ������

	return 0;
}