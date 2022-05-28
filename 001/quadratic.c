// compile this program with -lm
#include <stdio.h>
#include <math.h>

int main(void)
{
	// x = −b ± √(b2 − 4ac) / 2a

	float b, a, c;
	printf("Input a b c\n");
	scanf("%f, %f, %f", &a, &b, &c);
	float rooted = sqrt(b*b - 4*a*c);
	printf("Positive quadratic equation is %.2f\n", (-b + rooted)/(2.0*a));
	printf("Negative quadratic equation is %.2f\n", (-b - rooted)/(2.0*a));

	return 0;
}