#include <stdio.h>

int main(void)
{
	int a = 54321;
	int j = 1;
	for(int i = 1; i < 5; i++){
		j = j * 10;
		printf("%d\n", a/j);
	}
}
