#include <iostream>
using namespace std;

void foo(const int &x)
{
	cout << x << endl;
}

int main(void)
{
	foo(6);

	return 0;
}

//#include <iostream>
//using namespace std;
//
//void foo(int& x) �Լ��� �Ű������� ���۷����� ���̴� ���� �Ұ����ϹǷ� const�� ���
//{
//	cout << x << endl;
//}
//
//int main(void)
//{
//	foo(6); �������� �ƴ� ���ͷ�(�ּҰ� ����)�� �����ִ� ��Ȳ
//
//	return 0;
//}