//conversion of farenheat to celsius.
#include <stdio.h>
void main()
{
	float farenheat, celsius;
	printf("enter the fahrenheit\n");
	scanf("%f", &farenheat);
	celsius=(farenheat - 32)*5/9;
	printf("fahrenheit to celsius is %.2f celsius\n", celsius);
}
