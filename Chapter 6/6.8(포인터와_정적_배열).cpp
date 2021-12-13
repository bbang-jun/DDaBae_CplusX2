#include <iostream>
using namespace std;

void printArray(int* array) // = int array[]
{
	cout << sizeof(array) << endl; // 4 마찬가지로 포인터
}

int main(void)
{
	int array[5] = { 9,7,5,3,1 };

	cout << array << endl; // 사실 포인터이기 때문에 주소를 반환하는 것임. 그 중에서도 첫 번째 인덱스

	cout << *array << endl;

	char name[] = "abcabc";
	cout << *name << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;

	cout << "array size" << endl;
	cout << sizeof(array) << endl;

	ptr = array;

	// 포인터 변수 ptr의 사이즈가 4가 나오는 이유는 int의 사이즈인 4 때문이 아니라 포인터 변수 자체의 사이즈가 4이기 때문(x64로 빌드하면 8이 나옴)
	cout << sizeof(ptr) << endl; 

	return 0;
}