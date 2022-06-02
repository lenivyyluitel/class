
// Write a program to display 2 , 4, 8, 14, 22 upto 10th terms

#include <stdio.h>

int main(void)
{

	// 2
	// 2 + 2 = 4
	// 4 + 4 = 8
	// 8 + 6 = 14
	// 14 + 8 = 22

	int j = 2;
	int k = 2;
	for(int i = 0; i <= 10; i++){
		j = j + k*i;
		printf("%d ", j);

		// j = 2
		// k = 2
		// i = 1


		// j = 4
		// k = 2
		// i = 2


		// j = 8
		// k = 2
		// i = 3
	}
}