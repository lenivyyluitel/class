#include <stdio.h>

int main(void)
{
	// formula A=2(l+b)h
	float height, length, breadth;
	printf("Height: ");
	scanf("%f", &height);
	printf("Length: ");
	scanf("%f", &length);
	printf("Breath: ");
	scanf("%f", &breadth);

	printf("%.2f is the area of 4 walls\n", 2*(length+breadth)*height);
	// wrong formula I think
	printf("%.2f is the cost of painting 4 walls at rs 40 per m/sq\n", (2*(length+breadth)*height)*40);

	return 0;
}