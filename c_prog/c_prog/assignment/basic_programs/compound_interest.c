//compound interest.
#include <stdio.h>
#include <math.h>
void main()
{
	float principle, rate, time, compound_interest;
	printf("enter the principle, time, rate\n");
	scanf("%f%f%f", &principle, &time, &rate);
	float amount= principle * pow((1+rate/100),time); 
	compound_interest= amount-principle;
	printf("compound interest is %f\n", compound_interest);
}
