#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

int main(void)
{
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	return 0;
}