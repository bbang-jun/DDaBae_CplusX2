#include <iostream>
using namespace std;

int main(void)
{
	const int value = 5;
	const int* ptr1 = &value;
	// *ptr = 6;
	cout << *ptr1 << endl;

	int num = 5;
	const int* ptr2 = &num;
	// *ptr = 7;
	num = 6;
	cout << *ptr2 << endl;

	int var1 = 5;
	const int* ptr3 = &var1; // const�� �տ� ������ �����ϴ� ���� �� �ٲ�

	int var2 = 6;
	// *ptr3 = 10;
	ptr3 = &var2;

	cout << *ptr3 << endl;

	int var3 = 7;
	int* const ptr4 = &var3; // const�� ������ ������ �տ� ������ �����ϴ� ���� �ٲ� �� ������ ����Ű�� �޸��� ������ �Ұ���

	*ptr4 = 8;

	int var4 = 9;
	// ptr4 = &var4;

	int var5 = 10;
	const int* const ptr5 = &var5;
	// ����Ű�� ��, ����Ű�� �޸� 2�� �� ������ �Ұ�����

	return 0;
}