#include <iostream>

using namespace std;

int add(int x, int y) // �Ķ����(�Ű�����)
{
	return x + y;
}

int main(void)
{
	int x = 1, y = 2;

	cout << add(6, 3) << endl; // argument(����)

	cout << add(x, y) << endl; // �μ�

	return 0;
}