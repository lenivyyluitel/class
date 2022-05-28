#include <stdio.h>

int main(void)
{
	int num;
	printf("Input number\n");
	scanf("%d", &num);

	if (num == 0) {
		printf("ZERO\n");
	} else if (num < 0) {
		printf("NEGATIVE\n");
	} else if (num > 0) {
		printf("POSITIVE\n");
	} else {
		printf("GARBAGE INPUT\n");
	}

	return 0;
}