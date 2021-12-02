#include <iostream>

using namespace std;

int main(void)
{
	// Demical 0 1 2 3 4 5 6 7 8 9 10
	// Octal 0 1 2 3 4 5 6 7 10 11 12 13
	// Hexa 0 1 2 3 4 5 6 7 8 9 A B C D E F 10


	int x = 012; // 8진수
	int y = 12; // 10진수
	int z = 0xF; // 16진수

	cout << x << endl;
	cout << y << endl;
	cout << z << endl;

	return 0;
}