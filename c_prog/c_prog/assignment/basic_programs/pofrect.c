#include<stdio.h>
void main()
{
	unsigned int breadth, length, perimeter;
        printf("enter the length and breadth of a rectangle\n");
	scanf("%d%d", &length,&breadth);
	perimeter = 2*(length+breadth);
	printf("perimeter of a rectangle is %d\n", perimeter);
}
