//73. Write a C program to find power of any number using for loop.
#include <stdio.h>
#include <math.h>
void main()
{
	int exponent, base;
	double power;
	printf("enter any nunber\n");
	scanf("%d%d", &exponent, &base);
	power = pow(base, exponent);
	printf("%lf", power);
}
