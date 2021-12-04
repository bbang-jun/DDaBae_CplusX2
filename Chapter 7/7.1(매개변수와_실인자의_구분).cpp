#include <iostream>

using namespace std;

int add(int x, int y) // 파라미터(매개변수)
{
	return x + y;
}

int main(void)
{
	int x = 1, y = 2;

	cout << add(6, 3) << endl; // argument(인자)

	cout << add(x, y) << endl; // 인수

	return 0;
}