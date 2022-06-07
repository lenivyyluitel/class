#include <stdio.h>

int main(void)
{
	int a = 55555;
	int b = 1;
	for(int i = 0; i < 5; i++){
		printf("%d\n", a/b);
		a = a - 11111;
		b = b * 10;
	}
}
