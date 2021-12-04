#include <iostream>
#include <string>

using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;
};

void printPerson(Person ps)
{
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name << endl;
}

int main(void)
{
	Person me{2.0, 100.0, 20, "Jack Jack"};
	Person mon;
	Person dad;

	printPerson(me);

	return 0;
}