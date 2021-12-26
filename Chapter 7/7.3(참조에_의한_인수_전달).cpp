#include <iostream>
#include <cmath>

using namespace std;

void add(int &y) // 레퍼런스로 포인터와 같은 역할을 통해 call by reference
{
	cout << y << " " << &y << endl;

	y += 1;
}

void getSinCos(const double degree, double& sin_out, double& cos_out)
{
	const double pi = 3.141592; // 바뀌지 않는 값들은 const를 쓰는 습관 기르기
	double radians = degree * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main(void)
{
	int x = 5;
	cout << x << " " << &x << endl;
	add(x);
	cout << x << " " << &x << endl;

	double sin=0.0;
	double cos=0.0;

	getSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;



	return 0;
}