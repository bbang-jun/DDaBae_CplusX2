#include <iostream>
#include <cmath>

using namespace std;

void add(int &y)
{
	cout << y << " " << &y << endl;

	y += 1;
}

int main(void)
{
	int x = 5;
	cout << x << " " << &x << endl;
	add(x);
	cout << x << " " << &x << endl;

	return 0;
}