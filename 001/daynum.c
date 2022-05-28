#include <stdio.h>

int main(void)
{
	// 7 days so 7 blocks of array
	// each days are represented by three words so 3 bytes
	// one byte is for string termination '\0' so 4 bytes altogether

	// 7 days so 7 blocks of array, each block consisting 4 bytes
	char days[7][4] = { "Sat", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri" };

	int num;
	printf("Input number from 1-7 [Sat-Fri]\n");
	scanf("%d", &num);
	if (num < 1 || num > 7) {
		printf("Enter a valid number\n");
	} else {
		printf("%s\n", &days[num - 1][0]);
	}

	return 0;
}
