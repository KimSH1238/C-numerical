#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

#define SIZE 10

int main(void)
{
	int i;
	double score[SIZE];

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		score[i] = rand() % 100;
	}

	double sum = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("score[%d]=%0.4lf\n", i + 1, score[i]);
		sum = sum + score[i];
	}

	double avg;
	avg = sum / SIZE;
	printf("\naverage = %0.4lf\n", avg);
	return 0;
}