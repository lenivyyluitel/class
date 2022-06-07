#include <stdio.h>

int main(void)
{
	int i, a = 0, b;
	for(i = 1; i <= 5; i++)
	{
		a = a * 10 + 1;
		b = a * i;
		printf("%d\n", b);
	}
	return 0;
}
