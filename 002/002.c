#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("Input three numbers\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	if(num1 <= num2 && num1 <= num3)
		printf("%d is smallest\n", num1);
	else if(num2 <= num1 && num2 <= num3)
		printf("%d is smallest\n", num2);
	else if(num3 <= num1 && num3 <= num2)
		printf("%d is smallest\n", num3);
	else
		printf("Cannot process\n");
}