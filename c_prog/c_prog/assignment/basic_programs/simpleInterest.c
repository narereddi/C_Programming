//simple interest
#include <stdio.h>
void main()
{
	float principle, time, rate, simple_interest;
	printf("enter the principle, time and rate\n");
	scanf("%f%f%f", &principle, &time,&rate);
	simple_interest=(principle*time*rate)/100;
	printf("simple interest is %.3f\n", simple_interest);
}

