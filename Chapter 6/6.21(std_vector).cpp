#include <iostream>
#include <vector>
using namespace std;

// ���� �迭 ��ü=std::array ���� �迭 ��ü=std::vector

int main(void)
{
	vector<int> array; // ���� �Ҵ� �Ǵ� array�̱� ������ ���� �迭 array�� �޸� <int,5>ó�� ũ�⸦ ���� ���ص� ��

	vector<int> array2 = { 1,2,3,4,5 };

	cout << array2.size() << endl;

	vector<int> array3 = { 1,2,3, };

	cout << array3.size() << endl;

	vector<int> array4 = { 1,2,3, };

	cout << array4.size() << endl;

	vector<int>arr = { 5,4,3,2,1 };

	arr.resize(10); // �Ҵ�� ������ ������ ����. �������� 0���� ä���� resize�� �� ���� ���� �ϸ� �ڿ� ����

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr.size() << endl;
	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	return 0;
} // .length �迭�� ���� .length() ���ڿ��� ���� .size �Ҵ�� ������ ����