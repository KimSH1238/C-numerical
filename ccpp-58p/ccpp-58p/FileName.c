#include <stdio.h>

int main(void)
{
	char irum[10];
	printf("이름 입력 : ");
	scanf_s("%s", irum);
	printf("이름은 %s 입니다.\n", irum);

	return 0;
}