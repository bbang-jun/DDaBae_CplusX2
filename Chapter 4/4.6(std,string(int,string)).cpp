#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num;
	int age;
	string name;

	cout << "�й�: ";
	cin >> num;

	cout << "����: ";
	cin >> age;

	cin.ignore();

	cout << "�̸�: ";
	getline(cin, name);

	cout << num << " " << age << " " << name << endl;

	return 0;
}