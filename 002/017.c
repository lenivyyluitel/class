#include <stdio.h>

// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34

int main(void)
{
	int a = 0, b = 1;
	for(int i = 0; i < 10; i++){
		printf("%d ",a);
		printf("%d ",b);
		a += b;
		b += a;
	}
}
