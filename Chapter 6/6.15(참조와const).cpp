#include <iostream>
using namespace std;

// ���� �������� �������� ���� �ϴµ�, �Լ��� �Ű������� const ������ �ϸ� ���ڸ� �Ѱ��� �� ����� ������
// �߿�

void doSomething(const int& x) 
{
	cout << x << endl;
}

int main(void)
{
	int x = 5;
	int& ref_x = x;

	int a = 1;
	doSomething(a);
	doSomething(1);
	doSomething(a + 3);

	return 0;
}