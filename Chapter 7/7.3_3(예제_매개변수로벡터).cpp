#include <iostream>
#include <vector>
using namespace std;

// void foo(int(&arr)[4])
void foo(vector<int>& arr)
{

}

int main(void)
{
	/*int arr[]{ 1,2,3,4 };*/

	vector<int> arr{ 1,2,3,4 };

	foo(arr);

	return 0;
}