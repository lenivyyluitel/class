#include <stdio.h>

int main(void)
{

	int a = 0;
	printf("Enter number: ");
	scanf("%d", &a);
	int z = a;
	int n;
	int b;
	int s = 0;

	while(a != 0){
		n = a % 10;
		a = a / 10;

		b = n;

		printf("%d\n", b * b);

		s += b * b * b;
	}

	if(z == s){
		printf("Armstrong\n");
	} else {
		printf("Not armstrong\n");
	}
}
