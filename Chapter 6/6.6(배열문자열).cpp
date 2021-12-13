#include <iostream>

using namespace std;

int main(void)
{
	char myString[] = "string";

	for (int i = 0; i < 7; i++)
	{
		cout << (int)myString[i] << endl; // 아스키 코드로 확인
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
// cin으로 문자열을 입력받을 때는 띄어쓰기전까지만 받아들이므로 cin.geline으로 띄어쓰기도 받아들임