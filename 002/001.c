#include <stdio.h>

int main(void)
{
	int num1, num2;
	printf("Input two numbers\n");
	scanf("%d %d", &num1, &num2);

	if(num1 == num2){
		printf("Numbers are same\n");
	}
	printf("%d is small\n", num1>num2 ? num2:num1);

}