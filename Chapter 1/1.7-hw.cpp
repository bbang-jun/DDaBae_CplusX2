#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl; // 2
}

int main(void)
{
	int x = 0;

	cout << x << endl; // 1
	doSomething(x);
	cout << x << endl; // 3

	return 0;
}

// 1=0 2=123 3=0