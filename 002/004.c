#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("Input three sides\n");
	scanf("%d %d %d", &a, &b, &c);

	if(a + b == c || a + c == b || b + c == a)
		printf("Triangle can be formed\n");
	else
		printf("Triangle cannot be formed\n");
}