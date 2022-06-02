#include <stdio.h>

int main(void)
{
	printf("Input three digits number\n");
	int a;
	scanf("%d", &a);
	int firstDigit = a / 100;

	int secondDigit = a % 100;
	secondDigit = secondDigit / 10;

	int thirdDigit = a % 10;
	printf("%d%d%d\n", thirdDigit, secondDigit, firstDigit);
}