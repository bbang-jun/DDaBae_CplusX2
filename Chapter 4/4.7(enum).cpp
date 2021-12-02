#include <iostream>
#include <typeinfo>

using namespace std;

enum Color
{
	// 대부분 대문자로 해줌
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