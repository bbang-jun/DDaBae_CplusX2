#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[20]) // 매개변수 students_socres는 배열이 아니라 포인터
{
	cout << (int)&students_scores << endl; // 넘겨받은 배열의 첫번째 값을 저장하는 포인터 변수
	cout << (int)&students_scores[0] << endl; // 가리키고 있는 배열의 1번째 주소값
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