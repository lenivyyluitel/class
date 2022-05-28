#include <stdio.h>

int main(void)
{
	while (1) {
		int num;
		printf("Input number\n");
		scanf("%d", &num);

		if (num % 2 == 0) {
			printf("Even\n");
		} else if (num % 2 == 1) {
			printf("Odd\n");
		} else {
			printf("Garbage input\n");
		}
	}

	return 0;
}