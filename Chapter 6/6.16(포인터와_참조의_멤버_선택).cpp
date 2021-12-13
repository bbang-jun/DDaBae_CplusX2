#include <iostream>
using namespace std;

struct Person
{
	int age;
	double weight;
};

int main(void)
{
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;
	cout << ref.age << endl;

	Person* ptr = &person;
	ptr->age = 30;
	cout << ref.age << endl;

	(*ptr).age = 20;
	cout << ref.age << endl;

	Person& ref2 = *ptr;
	ref2.age = 45;

	cout << &person << endl;
	cout << &ref2 << endl;

	return 0;
}