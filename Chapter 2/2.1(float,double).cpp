#include <iostream>

using namespace std;

int main(void)
{
	int num1(123); // direct initialization
	int num2{ 123 }; // uniform initialization
	float a = 3.141592f;
	double b = 3.141592;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << a << endl;
	cout << b << endl;
	

	return 0;
}
/*
(Signed) int는 음의 정수, 0, 양의 정수(자연수)를, unsigned int는 양의 정수와 0을 포함
float와 double의 차이는 메모리 공간의 차이.
float=int=4byte
double=8byte
*/