#include <iostream>

using namespace std;

int main(void)
{
	char name[] = "bbang jun";

	const int length = sizeof(name) / sizeof(char);

	char* ptr = name;

	for (int i = 0; i < length; i++)
	{
		cout << *(ptr + i);
	}

	return 0;
}