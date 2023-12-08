#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>

#define  SIZE 6

using namespace std;

int main(void)
{
	double x[SIZE] = { 10, 20, 30, 40, 50, 60 };							  
	double y[SIZE] = { 0.14, 0.295, 0.442, 0.593, 0.725, 0.880 };

	double sumX = 0;
	double sumY = 0;
	double sumX2 = 0;
	double sumXY = 0;

	int i;
	for (i = 0; i < SIZE; i++)
	{
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumX2 = sumX2 + pow(x[i], 2);
		sumXY = sumXY + x[i] * y[i];
	}

	double a, b;
	a = (sumX * sumXY - sumX2 * sumY) / (pow(sumX, 2) - SIZE * sumX2);
	b = (sumX * sumY - SIZE * sumXY) / (pow(sumX, 2) - SIZE * sumX2);

	cout << "y = " << a << " + " << b << "x" << endl;

	return 0;
}