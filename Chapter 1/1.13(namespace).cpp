#include <iostream>

using namespace std;

namespace doSomething1
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

namespace doSomething2
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

int doSomething(int a, int b)
{
	return a + b;
}

int main(void)
{
	// using namespace doSomething1;
	cout << doSomething1::doSomething(3, 4) << endl;
	cout << doSomething2::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;

	return 0;
}

// namespace를 만들어주면 함수의 이름이 서로 같아도 사용할 수 있다.