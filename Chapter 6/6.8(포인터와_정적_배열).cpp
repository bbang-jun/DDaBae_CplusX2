#include <iostream>
using namespace std;

void printArray(int* array) // = int array[]
{
	cout << sizeof(array) << endl; // 4 ���������� ������
}

int main(void)
{
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl; // ��� �������̱� ������ �ּҸ� ��ȯ�ϴ� ����. �� �߿����� ù ��° �ε���

	cout << *array << endl;

	char name[] = "abcabc";
	cout << *name << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << "array size" << endl;
	cout << sizeof(array) << endl;

	ptr = array;

	// ������ ���� ptr�� ����� 4�� ������ ������ int�� �������� 4 ������ �ƴ϶� ������ ���� ��ü�� ����� 4�̱� ����(x64�� �����ϸ� 8�� ����)
	cout << sizeof(ptr) << endl; 

	return 0;
}