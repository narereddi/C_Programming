//area of a triangle.
#include <stdio.h>
void main()
{
	unsigned int height, base;
	float area;
	printf("enter the height and base of a triangle\n");
	scanf("%d%d", &height, &base);
	area = 1/2.0*(base*height);
	printf("area of a triangle is %.3f\n",area);
}
