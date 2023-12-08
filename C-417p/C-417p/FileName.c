#include <conio.h>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
	char ans1;
	int ans2, i;
	int seat[SIZE] = { 0 };

	while (1)
	{
		printf("좌석 예약 결정 (y/n) : ");
		scanf_s("%c", &ans1);

		if (ans1 == 'n')
		{
			break;
		}

		printf("------------------------------------------\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("------------------------------------------\n");

		for (i = 0; i < SIZE; i++)
		{
			printf(" %d", seat[i]);
		}
		printf("\n\n예약 시도 좌석 번호 :");
		scanf_s("%d", &ans2);

		if (seat[ans2 - 1] == 0)
		{
			seat[i] = 1;
			printf("예약 성공\n");
		}
		else				   
		{
			printf("예약 불능\n");

		}

		return 0;
	}
}