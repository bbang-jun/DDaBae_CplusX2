#include <iostream>
using namespace std;

int main(void)
{
	// os�κ��� �޾ƿ� 4����Ʈ�� �޸� �ּҰ� ptr�� ������ ��
	int* ptr = new int(7); // int size�� ���� �޸𸮸� �޾ƿ� �� �� �޸� �ּҸ� �˷��ֱ� ������ �����ͷ� �޾ƾ� ��.

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr; // delete ���Ŀ��� *ptr�� ���� �̻��� ���� ������ ��

	ptr = nullptr; // ���� ��ptr�� �־���

	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "could not allocate" << endl;

	return 0;
}