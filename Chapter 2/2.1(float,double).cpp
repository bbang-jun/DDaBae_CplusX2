#include <iostream>

using namespace std;

int main(void)
{
	int num1(123); // direct initialization
	int num2{ 123 }; // uniform initialization
	float a = 3.141592f;
	double b = 3.141592;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << a << endl;
	cout << b << endl;
	

	return 0;
}
/*
(Signed) int�� ���� ����, 0, ���� ����(�ڿ���)��, unsigned int�� ���� ������ 0�� ����
float�� double�� ���̴� �޸� ������ ����.
float=int=4byte
double=8byte
*/