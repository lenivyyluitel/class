#include <stdio.h>

//  89.Write a   to display 5, 54, 543, 5432, 54321

int main(void)
{
	int a = 5;
	for(int i = 4; i >= 0; i--){
		printf("%d\n", a);
		a = a*10+i;
		
	}
}
