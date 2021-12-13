#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main(void)
{
	int array[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// auto를 넣으면 자동으로 형태가 정해짐
	//for (auto& number : array) // int 변수 는 함수의 파라미터로 들어가는 것과 비슷하므로 레퍼런스로 변경
		//number *= 10;

	for (const auto &number : array) // number에 한 번씩 들어감. 내부에서 number 값 변경 불가능
	{
		cout << number << " ";
	}
	cout << endl;

	int max_num = numeric_limits<int>::lowest();

	for (const auto& n : array)
		max_num = max(max_num, n); // max_num과 n 중 더 큰 것을 max_num에 대입

	cout<<max_num<<endl;

	return 0;
}