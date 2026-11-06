//Write a C program to find diameter, circumference and area of circle using functions.

#include <stdio.h>
#define PI 3.14
void circle(int);

void circle(int r)
{
	float diameter, circumference, area;
	diameter= 2*r;
	circumference = 2*PI*r;
	area = PI*r*r;
	printf("diameter is %.2f\n", diameter);
	printf("circumference is %.2f\n", circumference);
	printf("area is %.2f\n", area);

}
	
void main()
{
	int r;
	printf("enter the radius\n");
	scanf("%d", &r);
	circle(r);
}
