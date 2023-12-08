#include <time.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define STUDENT 5

int main(void)
{
	double score[STUDENT];
	int i;
	double avg, sum = 0;

	for (i = 0; i < STUDENT; i++)
	{
		printf("성적 데이터를 입력하시오 :");
		scanf_s("%lf", &score[i]);
	}

	for (i = 0; i < STUDENT; i++)
	{
		sum += score[i];
	}

	avg = sum / STUDENT;
	printf("\n성적 평균 = %-2.4lf\n", avg);
	printf("성적 총합 = %0.4lf\n", sum);

	return 0;
}