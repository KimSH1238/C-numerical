#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	srand(time(NULL));

	int dice1 = (rand() % 6) + 1;
	cout << "�ֻ��� 1�� �� : " << dice1 << endl;
	int dice2 = (rand() % 6) + 1;
	cout << "�ֻ��� 2�� �� : " << dice2 << endl;
	int dice3 = (rand() % 6) + 1;
	cout << "�ֻ��� 3�� �� : " << dice3 << endl;
	int dice4 = (rand() % 6) + 1;
	cout << "�ֻ��� 4�� �� : " << dice4 << endl;
	int dice5 = (rand() % 6) + 1;
	cout << "�ֻ��� 5�� �� : " << dice5 << endl;
	int dice6 = (rand() % 6) + 1;
	cout << "�ֻ��� 6�� �� : " << dice6 << endl << endl;

	int dice = dice1 + dice2 + dice3 + dice4 + dice5 + dice6;
	cout << "�ֻ����� �� : " << dice << endl;

	return 0;
}