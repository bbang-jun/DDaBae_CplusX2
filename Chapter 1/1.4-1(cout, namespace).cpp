#include <iostream> // cout, cin, edl 함수가 iostream에 정의
#include <cstdio> // printf

int main(void)
{
	using namespace std;

	int x = 1024;
	double pi = 3.141592;

	cout << "I love this lecture!" << endl;
	cout << "x is " << x << std::endl;
	cout << "pi is " << pi << endl;
	cout << "abc" << "\t" << "def" << endl;

	cout << "\a";

	return 0;
}