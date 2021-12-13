#include <iostream>
using namespace std;

int main(void)
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;

	ptr = &value;
	ptrptr = &ptr;

	cout << &value << " " << ptr << " " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl; // *ptrptr = ptrÀÇ ÁÖ¼Ò
	cout << **ptrptr << endl; 

	return 0;
}