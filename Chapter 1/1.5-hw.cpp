#include <iostream>

using namespace std;

int input()
{
	int num;
	cin >> num;

	return num;
}

int addTwoNumbers(int num_1, int num_2)
{
	int sum = num_1 + num_2;

	return sum;
}

int main(void)
{
	int num1 = input();
	int num2 = input();

	cout << "The answer is " << addTwoNumbers(num1, num2) << endl;

	return 0;
}