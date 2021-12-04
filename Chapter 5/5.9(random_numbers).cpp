#include <iostream>
#include <random>

using namespace std;

int main(void)
{
	std::random_device rd; // �õ尪�� ��� ���� random_device ����
	std::mt19937 mersenne(rd()); // random_device�� ���� ���� ���� ���� �ʱ�ȭ
	std::uniform_int_distribution<> range(1, 1000); // 1���� 1000���� �յ��ϰ� ��Ÿ���� ������ ������ ���� �յ� ���� ����

	for (int i = 0; i < 10; i++)
	{
		cout << "����: " << range(mersenne) << endl;
	}

	return 0;
}