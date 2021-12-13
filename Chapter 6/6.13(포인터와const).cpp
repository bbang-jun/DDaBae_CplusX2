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
	const int* ptr3 = &var1; // const가 앞에 붙으면 참조하는 값을 못 바꿈

	int var2 = 6;
	// *ptr3 = 10;
	ptr3 = &var2;

	cout << *ptr3 << endl;

	int var3 = 7;
	int* const ptr4 = &var3; // const가 포인터 변수명 앞에 붙으면 참조하는 값은 바꿀 수 있지만 가리키는 메모리의 변경은 불가능

	*ptr4 = 8;

	int var4 = 9;
	// ptr4 = &var4;

	int var5 = 10;
	const int* const ptr5 = &var5;
	// 가리키는 값, 가리키는 메모리 2개 다 변경이 불가능함

	return 0;
}