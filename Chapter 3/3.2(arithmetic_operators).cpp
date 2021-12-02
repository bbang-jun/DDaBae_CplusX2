#include <iostream>

using namespace std;

int main(void)
{
	int x = 7;
	int y = 6;

	cout << y << "\n" << endl;
	cout << x / y << endl;
	cout << float(x) / y << endl;
	cout << x / float(y) << endl;
	cout << float(x) / float(y) << endl;
	cout << -5 / float(2) << endl;
	cout << -5 / 2 << endl;

	return 0;
}