#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int prac(void)
{
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "�ֻ��� �� = " << dice1 + dice2 << endl;
	return 0;
}