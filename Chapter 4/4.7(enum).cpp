#include <iostream>
#include <typeinfo>

using namespace std;

enum Color
{
	// ��κ� �빮�ڷ� ����
	black,
	red,
	blue,
	green,
};


int main(void)
{
	Color paint = black;
	Color house(red);
	Color shoes = blue;

	cout << paint << " " << black << endl;



	return 0;
}