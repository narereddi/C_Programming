#include <stdio.h>
void main()
{
	float celsius, fahrenheit;
	printf("enter the celsius\n");
	scanf("%f",&celsius);
	fahrenheit= (celsius*9/5)+32;
	printf("celsius to fahrenheit is %.2f fahrenheit\n", fahrenheit);
}

