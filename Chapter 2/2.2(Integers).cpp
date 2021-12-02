#include <iostream>
#include <cmath>
// Á¦°ö °è»ê

int main(void)
{
	using namespace std;

	short a = 1; // 2bytes 16bits
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;
	cout << std::pow(2, sizeof(short) * 8) << endl; // 65536

	return 0;
}