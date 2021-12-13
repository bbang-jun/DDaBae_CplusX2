#include <iostream>
using namespace std;

// 원래 참조에는 변수명이 들어가야 하는데, 함수의 매개변수로 const 참조를 하면 인자를 넘겨줄 때 상수도 가능함
// 중요

void doSomething(const int& x) 
{
	cout << x << endl;
}

int main(void)
{
	int x = 5;
	int& ref_x = x;

	int a = 1;
	doSomething(a);
	doSomething(1);
	doSomething(a + 3);

	return 0;
}