#include <stdio.h>

int main(void)
{
	int a = 1, j;
	for(j = 2; j <= 6; j++)
		{
			printf("%d\n", a);
			a = a * 10 + j;
		}
}
