#include <stdio.h>
void main()
{
	unsigned int length, breadth;
	float area;
	printf("enter the length and breadth of a rectangle\n");
	scanf("%d%d", &length, &breadth);
	area=length*breadth;
	printf("area of recatangle is %.2f\n", area);
}
