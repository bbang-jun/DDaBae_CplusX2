#include <iostream>
using namespace std;

int main(void)
{
	const int num_students = 5;
	int scores[num_students] = { 1,2,3,4,5 };

	int total_score = 0;
	
	for (int i = 0; i < num_students; i++)
		total_score += scores[i];

	double avg_score = total_score / num_students;

	cout << "Æò±ÕÁ¡¼ö: " << avg_score << endl;

	return 0;
}