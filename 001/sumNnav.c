#include <stdio.h>

int main(void)
{
	float num1, num2;
	printf("Input two number\n");
	scanf("%f %f", &num1, &num2);

	// sum
	printf("The sum is %.2f\n", num1 + num2);
	// diff
	printf("The difference is %.2f\n", num1 - num2);
	// avg
	printf("The average is %.2f\n", (num1 + num2)/2.0);

	return 0;
	
}