#include <iostream>
using namespace std;

int getInt()
{
	while (true)
	{
		cout << "정수 입력: ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			cout << "옳지 않은 숫자, 다시 입력" << endl;
		}
		else
		{
			std::cin.ignore(32767, '\n');

			return x;
		}
	}
}

char getOperater()
{
	cout << "연산자 입력: ";
	char op;
	cin >> op;
	std::cin.ignore(32767, '\n');

	return op;
}

void printResult(int x, char op, int y)
{
	if (op == '+')
		cout << x + y << endl;
	else if (op == '-')
		cout << x - y << endl;
	else
	{
		cout << "없는 연산자" << endl;
	}
}

int main(void)
{
	int x = getInt();
	char op = getOperater();
	int y = getInt();

	printResult(x, op, y);

	return 0;
}

// std::cin.ignore(32767, '\n'); 코드를 통해 버퍼에 남아있는 값 무시 가능
// std::cin.fail() 정수값을 넘어가는 1000000000000000000와 같은 값이 들어갈 경우(실패하는 경우)
// std:cin.clear() 버퍼 비우기