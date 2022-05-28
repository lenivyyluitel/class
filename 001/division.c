#include <stdio.h>

int main(void)
{
	float num1, num2;
	printf("Input two number\n");
	scanf("%f %f", &num1, &num2);

	printf("Normal division is %d\n", (int)num1/(int)num2);
	printf("Floated division is %.2f\n", num1/num2);

	return 0;
}