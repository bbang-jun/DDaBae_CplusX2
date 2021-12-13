#include <iostream>
#include <limits>
#include <algorithm>
using namespace std;

int main(void)
{
	int array[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	// auto�� ������ �ڵ����� ���°� ������
	//for (auto& number : array) // int ���� �� �Լ��� �Ķ���ͷ� ���� �Ͱ� ����ϹǷ� ���۷����� ����
		//number *= 10;

	for (const auto &number : array) // number�� �� ���� ��. ���ο��� number �� ���� �Ұ���
	{
		cout << number << " ";
	}
	cout << endl;

	int max_num = numeric_limits<int>::lowest();

	for (const auto& n : array)
		max_num = max(max_num, n); // max_num�� n �� �� ū ���� max_num�� ����

	cout<<max_num<<endl;

	return 0;
}