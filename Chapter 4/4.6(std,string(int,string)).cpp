#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int num;
	int age;
	string name;

	cout << "학번: ";
	cin >> num;

	cout << "나이: ";
	cin >> age;

	cin.ignore();

	cout << "이름: ";
	getline(cin, name);

	cout << num << " " << age << " " << name << endl;

	return 0;
}