//area of a triangle using s(s-a)*(s-b)*(s-c)
#include <stdio.h>
#include <math.h>
void main()
{
	unsigned int a,b,c;
	float s,area;
	printf("enter the sides of a triangle\n");
	scanf("%d%d%d", &a,&b,&c);
	s=(a+b+c)/2.0;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of a trinagle is %f\n", area);
}

