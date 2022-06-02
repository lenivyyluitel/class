#include <stdio.h>

int main(void)
{
	int a;
	printf("Enter a number of two digits\n");
	scanf("%d", &a);
	int first = a/10;
	int second = a%10;

	printf("Sum of their digits is %d\n",first+second);
	printf("Products of their digits is %d\n",first*second);
}