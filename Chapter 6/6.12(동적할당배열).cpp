#include <iostream>
using namespace std;

int main(void)
{
	int length;

	cin >> length;

	int* array = new int[length] {};

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
		cout << (int)&array[i] << endl;
	}

	delete[]array;

	return 0;
}