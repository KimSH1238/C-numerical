#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>

#define SIZE 6

int main(void)
{
	double freq[SIZE] = { 0 };
	int i;

	for (i = 0; i < 10000; i++)
	{
		++freq[rand() % 6];
	}

	printf("¼ýÀÚ ºóµµ\n\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d % -8.4lf\n", i + 1, freq[i]);
	}

	return 0;
}