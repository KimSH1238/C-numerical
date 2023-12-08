#define _CRT_SECURE_NO_WARNING
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	double radius;
	double area, circum;

	printf("반지름을 입력 : ");
	scanf_s("%lf", &radius);

	area = M_PI * pow(radius, 2);
	circum = 2 * M_PI * radius;

	printf("\n원의 면적 : %-8.4lf\n", area);
	printf("원의 둘레 : %-8.4lf\n", circum);

	return 0;
}