#include <stdio.h>

int main(void)
{
	int a;
	printf("Input number\n");
	scanf("%d", &a);

	for(int i = 1; i <= 10; i++)
		printf("%d x %d is %d\n", a, i, a * i);
}