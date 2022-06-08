#include <stdio.h>

int main(void)
{
	int s = 0, n, x;
	printf("Number  de\n");
	scanf("%d", &n);

	while(n != 0){
		x = n % 10;
		s = s + x;
		n = n / 10;
	}
	printf("%d", s);
}
