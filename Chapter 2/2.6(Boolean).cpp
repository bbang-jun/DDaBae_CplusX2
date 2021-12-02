#include <iostream>

using namespace std;

int main(void)
{
	bool b1 = true; // copy initial~
	bool b2(false); // direact ini
	bool b3{ true }; // uniform ini

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	cout << std::boolalpha; // true.false로 나오게 함

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	cout << std::noboolalpha;

	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;

	return 0;
}