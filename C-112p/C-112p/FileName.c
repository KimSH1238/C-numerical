#define _CRT_SECURE_NO_WARNING

#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double x, y, sum, product;
	
	printf("ù ��° ���� : ");
	scanf_s("%lf", &x);
	printf("�� ��° ���� : ");
	scanf_s("%lf", &y);

	sum = x + y;
	product = x * y;

	printf("\n�� ���� �� : %-8.4lf\n", sum);
	printf("�� ���� �� : %-8.4lf\n", product);

	return 0;
}																		  