#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	const char a[] = "Hello, World";
	const string b = "Hello, World";

	cout << a << endl;
	cout << b << endl;

	string name;
	string age;

	cout << "이름: ";
	getline(cin, name);
	

	cout << "나이: ";
	getline(cin, age);

	cout << name << " " << age << endl;

	return 0;
}
// 그냥 출력시키고 jack jack 처럼 띄어쓰기로 입력하면 다음 것 입력을 받을 수 없음. 따라서 getline으로 라인 전체를 띄어쓰기
// 상관없이 입력받고 엔터