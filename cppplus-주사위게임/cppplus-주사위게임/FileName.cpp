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

	cout << "주사위 합 = " << dice1 + dice2 << endl;
	return 0;
}