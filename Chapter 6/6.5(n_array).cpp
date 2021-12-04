#include <iostream>

using namespace std;

int main(void)
{
	int rows = 3;
	int cols = 5;
	 
	for (int i = 0; i <= rows; i++)
	{
		for (int j = 0; j <= cols; j++)
		{
			cout << '[' << i << ']' << '[' << j << ']' << '\t';
		}

		cout << endl;
	}

	cout << endl;

	return 0;
}