#include <iostream>

using namespace std;

int main(void)
{
	char myString[] = "string";

	for (int i = 0; i < 7; i++)
	{
		cout << (int)myString[i] << endl; // �ƽ�Ű �ڵ�� Ȯ��
	}

	char yourString[100];
	cout << "yourstring" << endl;
	cin.getline(yourString, 100);
	cout << yourString << endl;

	char goodString[100];
	cout << "goodstring" << endl;
	cin.getline(goodString, 100);
	cout << goodString;
	

	return 0;
}
// cin���� ���ڿ��� �Է¹��� ���� ������������ �޾Ƶ��̹Ƿ� cin.geline���� ���⵵ �޾Ƶ���