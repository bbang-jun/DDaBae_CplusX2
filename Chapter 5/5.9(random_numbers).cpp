#include <iostream>
#include <random>

using namespace std;

int main(void)
{
	std::random_device rd; // 시드값을 얻기 위한 random_device 생성
	std::mt19937 mersenne(rd()); // random_device를 통해 난수 생성 엔진 초기화
	std::uniform_int_distribution<> range(1, 1000); // 1부터 1000까지 균등하게 나타나는 난수열 생성을 위한 균등 분포 정의

	for (int i = 0; i < 10; i++)
	{
		cout << "난수: " << range(mersenne) << endl;
	}

	return 0;
}