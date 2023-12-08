#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int ex(void)
{
	srand(time(NULL));
	int number = (rand() % 6) + 1;
	return 0;
}