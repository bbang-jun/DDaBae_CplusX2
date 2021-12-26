#include <iostream>
using namespace std;

void foo(const int &x)
{
	cout << x << endl;
}

int main(void)
{
	foo(6);

	return 0;
}

//#include <iostream>
//using namespace std;
//
//void foo(int& x) 함수의 매개변수로 레퍼런스를 붙이는 것이 불가능하므로 const를 사용
//{
//	cout << x << endl;
//}
//
//int main(void)
//{
//	foo(6); 변수명이 아닌 리터럴(주소가 없음)을 전해주는 상황
//
//	return 0;
//}