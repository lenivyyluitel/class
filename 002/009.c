#include <stdio.h>

int main(void)
{
	for(int i = 1; i <= 14; i++){

		for(int j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}

		printf("\n");
	}
}
