#include <iostream>
using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};

// void pointer, generic pointer
int main(void)
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;

	Type type = FLOAT;

	if (type == FLOAT)
		cout << *static_cast<float*>(ptr) << endl;
	else if(type==INT)
		cout << *static_cast<int*>(ptr) << endl;

	return 0;
}