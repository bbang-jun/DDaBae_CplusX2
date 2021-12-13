#include <iostream>
using namespace std;

int main(void)
{
	// os로부터 받아온 4바이트의 메모리 주소가 ptr에 저장이 됨
	int* ptr = new int(7); // int size에 맞춰 메모리를 받아온 후 그 메모리 주소를 알려주기 때문에 포인터로 받아야 함.

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr; // delete 이후에는 *ptr의 값이 이상한 값이 나오게 됨

	ptr = nullptr; // 따라서 널ptr을 넣어줌

	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
		cout << "could not allocate" << endl;

	return 0;
}