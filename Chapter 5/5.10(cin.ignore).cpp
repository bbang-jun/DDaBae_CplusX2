#include <iostream>
using namespace std;

int getInt()
{
	while (true)
	{
		cout << "���� �Է�: ";
		int x;
		cin >> x;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			cout << "���� ���� ����, �ٽ� �Է�" << endl;
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
	cout << "������ �Է�: ";
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
		cout << "���� ������" << endl;
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

// std::cin.ignore(32767, '\n'); �ڵ带 ���� ���ۿ� �����ִ� �� ���� ����
// std::cin.fail() �������� �Ѿ�� 1000000000000000000�� ���� ���� �� ���(�����ϴ� ���)
// std:cin.clear() ���� ����