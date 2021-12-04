#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "함수 안에서: " << y << " " << &y << endl;
}

int main(void)
{
	int x = 6;

	doSomething(5);

	cout << "메인 안에서: " << x << " " << &x << endl;

	doSomething(x);
	doSomething(x + 1); // 값이 전달되므로 위와 주소 값이 동일함

	return 0;
}