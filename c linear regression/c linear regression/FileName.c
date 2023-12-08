#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

#define SIZE 6

int main(void)
{
	int x[SIZE] = { 10, 20, 30, 40 ,50 ,60 };
	double y[SIZE] = { 0.14, 0.295, 0.442, 0.593, 0.725, 0.880 };

	float sumX = 0, sumY = 0, sumX2 = 0, sumXY = 0, a, b;

	/* calculating */
	int i;
	for (i = 0; i <= SIZE-1; i++)
	{
		sumX = sumX + x[i];
		sumX2 = sumX2 + pow(x[i], 2);
		sumY = sumY + y[i];
		sumXY = sumXY + x[i] * y[i];
	}

	a = (sumX * sumXY - sumX2 * sumY) / (pow(sumX, 2) - SIZE * sumX2);
	b = (sumX * sumY - SIZE * sumXY) / (pow(sumX, 2) - SIZE * sumX2);
	printf("y = %0.4lf + %0.4lfx", a, b);
	
	return 0;
}