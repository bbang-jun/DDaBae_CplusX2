#include <iostream>
using namespace std;


void doSomething(int& n) // &로 넘기면 변수 자체가 넘어가므로 포인터와 달리 주소 자체 또한 복사할 필요없음 만약 그냥 n일 경우 callbyvalue
{
	cout << &n << endl;

	n = 10;
	cout << "In doSomething: " << n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

int main(void)
{
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	int& ref = value; // 변수의 별명이므로 상수 ex:101 같은 것은 들어갈 수 없음

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;

	cout << "2번째 예제" << endl;

	const int x = 5;
	//int& refx = x; // 참조하는 변수가 const이면 불가능함
	const int& refx = x;

	cout << "3번째 예제" << endl;

	int n = 5;
	cout << n << endl;
	cout << &n << endl;

	doSomething(n);

	cout << n << endl;

	// 중요 예제
	cout << "4번째 예제" << endl;

	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;

	return 0;
}