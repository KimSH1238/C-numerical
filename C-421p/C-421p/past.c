#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define STUDENT 5

double get_average(int scores[], int size);

int main1(void)
{
	double score[STUDENT] = { 1, 2, 3, 4, 5 };
	double avg;

	avg = get_average(score, STUDENT);
	printf("평균은 %-8.3lf입니다.\n", avg);

	return 0;
}

double get_average(double scores[], int size)
{
	int i;
	double sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += scores[i];
	}

	return sum / size;
}