#include <iostream>
using namespace std;

void foo(int*& ptr)
{
	cout << ptr << " " << &ptr << endl;
}

int main(void)
{
	int num = 5;
	int* ptr = &num;
	cout << ptr << " " << &ptr << endl;
	foo(ptr);

	return 0;
}