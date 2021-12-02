#include <iostream>

using namespace std;

#define MY_NUMBER 333
#define MAX(a, b) ((a>b) ? a:b)

int main(void)
{
	cout << MY_NUMBER << endl;
	cout << MAX(4, 3) << endl;

	return 0;
}

// 매크로는 요즘 별로 안씀