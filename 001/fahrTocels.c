#include <stdio.h>

int main(void)
{
	// To convert temperatures in degrees Fahrenheit to Celsius, subtract 32 and multiply by . 5556 (or 5/9).
	int num;
	printf("Input fahr\n");
	scanf("%d", &num);
	printf("Fahr to celsius is %f\n", (float)(num - 32)*(5/9.0));

	return 0;
}