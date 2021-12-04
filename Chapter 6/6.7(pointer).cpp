#include <iostream>
#include <typeinfo>

using namespace std;

struct alpha {
	int a, b, c, d;
};

int main(void)
{
	int x = 5;
	int* ptr = &x;

	cout << typeid(x).name() << endl;
	cout << typeid(&x).name() << endl;

	alpha al;
	alpha* ptr_a;

	cout << sizeof(alpha) << endl;

	cout << sizeof(ptr_a) << endl;

	cout << sizeof(*ptr_a) << endl;

	return 0;
}