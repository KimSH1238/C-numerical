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

	printf("�������� �Է� : ");
	scanf_s("%lf", &radius);

	area = M_PI * pow(radius, 2);
	circum = 2 * M_PI * radius;

	printf("\n���� ���� : %-8.4lf\n", area);
	printf("���� �ѷ� : %-8.4lf\n", circum);

	return 0;
}