#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printLength(array<int, 5>& my_arr) // �Ϲ� ������ �Ű������� ��������� �� �� ���簡 �Ǿ &�� ����
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

	sort(num.rbegin(), num.rend()); // ���� ���� sort ���ۺ��� ������. �Ųٷ� �Ϸ��� r���̱�

	for (auto& element : num)
		cout << element << " ";
	cout << endl;

	return 0;
}