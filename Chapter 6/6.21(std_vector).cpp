#include <iostream>
#include <vector>
using namespace std;

// 정적 배열 대체=std::array 동적 배열 대체=std::vector

int main(void)
{
	vector<int> array; // 동적 할당 되는 array이기 때문에 정적 배열 array와 달리 <int,5>처럼 크기를 지정 안해도 됨

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };

	cout << array3.size() << endl;

	vector<int> array4 = { 1,2,3, };

	cout << array4.size() << endl;

	vector<int>arr = { 5,4,3,2,1 };

	arr.resize(10); // 할당된 공간의 개수를 변경. 나머지는 0으로 채워짐 resize를 더 작은 수로 하면 뒤에 날라감

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	return 0;
} // .length 배열의 길이 .length() 문자열의 길이 .size 할당된 공간의 개수