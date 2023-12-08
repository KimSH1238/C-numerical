#include <stdio.h>

int main(void)
{
	float a = 5;
	float b = 6;

	printf("1번째 수 = %-5.1f,\n", a);
	printf("2번째 수 = %-5.1f,\n", b);
	printf("두 수의 합 = %-5.1f\n", a + b);

	return 0;
}