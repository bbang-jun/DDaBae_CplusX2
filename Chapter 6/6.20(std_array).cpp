#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printLength(array<int, 5>& my_arr) // 일반 변수도 매개변수로 집어넣으면 한 번 복사가 되어서 &로 전달
{
	cout << my_arr.size() << endl;
}

int main(void)
{
	// int array[]={1,2,3,4,5}
	array<int, 5> my_arr = { 1,2,3,4,5 };
	my_arr = { 0,1,2,3,4 };
	my_arr = { 0,1,2, };

	cout << my_arr.size() << endl;

	printLength(my_arr);

	array<int, 5> num = { 5,3,1,6,4 };

	sort(num.rbegin(), num.rend()); // 순서 정렬 sort 시작부터 끝까지. 거꾸로 하려면 r붙이기

	for (auto& element : num)
		cout << element << " ";
	cout << endl;

	return 0;
}