#include <iostream>

using namespace std;

enum Color
{
	RED,
	BLUE,
};

enum Fruit
{
	BANANA,
	APPLE,
};

int main(void)
{
	Color color1 = Color::BLUE;
	Color color2 = Color::BLUE;

	Fruit fruit1 = Fruit::BANANA;
	Fruit fruit2 = Fruit::APPLE;

	if (color1 == color2)
		cout << "Same Color" << endl;

	if (color1 != fruit1)
		cout << "different" << endl;

	return 0;
}