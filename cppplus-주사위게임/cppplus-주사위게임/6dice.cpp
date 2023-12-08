#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	srand(time(NULL));

	int dice1 = (rand() % 6) + 1;
	cout << "주사위 1의 수 : " << dice1 << endl;
	int dice2 = (rand() % 6) + 1;
	cout << "주사위 2의 수 : " << dice2 << endl;
	int dice3 = (rand() % 6) + 1;
	cout << "주사위 3의 수 : " << dice3 << endl;
	int dice4 = (rand() % 6) + 1;
	cout << "주사위 4의 수 : " << dice4 << endl;
	int dice5 = (rand() % 6) + 1;
	cout << "주사위 5의 수 : " << dice5 << endl;
	int dice6 = (rand() % 6) + 1;
	cout << "주사위 6의 수 : " << dice6 << endl << endl;

	int dice = dice1 + dice2 + dice3 + dice4 + dice5 + dice6;
	cout << "주사위의 합 : " << dice << endl;

	return 0;
}