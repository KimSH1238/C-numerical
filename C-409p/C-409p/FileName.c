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
		printf("���� �����͸� �Է��Ͻÿ� :");
		scanf_s("%lf", &score[i]);
	}

	for (i = 0; i < STUDENT; i++)
	{
		sum += score[i];
	}

	avg = sum / STUDENT;
	printf("\n���� ��� = %-2.4lf\n", avg);
	printf("���� ���� = %0.4lf\n", sum);

	return 0;
}