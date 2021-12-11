#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[20]) // �Ű����� students_socres�� �迭�� �ƴ϶� ������
{
	cout << (int)&students_scores << endl; // �Ѱܹ��� �迭�� ù��° ���� �����ϴ� ������ ����
	cout << (int)&students_scores[0] << endl; // ����Ű�� �ִ� �迭�� 1��° �ּҰ�
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << sizeof(students_scores) << endl;
}

int main(void)
{
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };

	cout << (int)students_scores << endl;
	cout << (int)&students_scores << endl;
	cout << (int)&(students_scores[0]) << endl;
	cout << (int)&(students_scores[1]) << endl;
	cout << (int)&(students_scores[2]) << endl;

	cout << "doSomething" << endl;
	
	doSomething(students_scores);

	cout << sizeof(students_scores) << endl;

	return 0;
}