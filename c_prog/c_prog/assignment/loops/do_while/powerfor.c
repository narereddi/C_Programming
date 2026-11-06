//73. Write a C program to find power of any number using for loop.
#include <stdio.h>
void main()
{
	int base, exponent, i, power;
	printf("enter base and exponent\n");
	scanf("%d%d", &base, &exponent);
	for(i=1;i<=exponent; i++)
	{
		power = base*base;
	}
	printf("%d", power);
}
