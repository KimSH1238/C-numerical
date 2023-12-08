#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i, n, STUDENT;
	double score[STUDENT];

	printf("how many student data? :\n");
	scanf("%d", &STUDENT);
	printf("enter data :\n");

	for (i = 0; i <= STUDENT; i++)
	{
		printf("score :\n");
		scanf("%lf", score[i]);
	}

	/*calculating*/
	double avg;
	avg = get_average(scores, STUDENT);
	printf("평균은 %-8.4lf입니다.\n", avg);
	
	return 0;
}

double get_average(double scores[STUDENT], int size)
{
	int i;
	double sum = 0;
	double scores[size];
	int STUDENT;

	for (i = 0; i < size; i++)
	{
		sum += scores[i];
	}
	return sum / size;
}