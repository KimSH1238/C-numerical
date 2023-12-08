#define _CRT_SECURE_NO_WARNING

#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double x, y, sum, product;
	
	printf("첫 번째 숫자 : ");
	scanf_s("%lf", &x);
	printf("두 번째 숫자 : ");
	scanf_s("%lf", &y);

	sum = x + y;
	product = x * y;

	printf("\n두 수의 합 : %-8.4lf\n", sum);
	printf("두 수의 곱 : %-8.4lf\n", product);

	return 0;
}																		  