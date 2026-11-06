#include <math.h>
#include <stdio.h>
void main()
{
	float side, area;
	printf("enter the side of the equilateral trinagle\n");
	scanf("%f", &side);
	area= (sqrt(3.0)/4)*side*side;
	printf("%f", area);
}
