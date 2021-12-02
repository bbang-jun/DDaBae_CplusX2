#include <iostream>

using namespace std;

int main(void)
{
	int x = 0;

	cin >> x;

	if (x >= 10)
	{
		cout << x << "은 10보다 크거나 같다." << endl;
	}
	else
		cout << x << "은 10보다 작다." << endl;

	return 0;
}