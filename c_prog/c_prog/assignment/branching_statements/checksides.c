//check triangle validity with sides 
#include <stdio.h>
void main()
{	unsigned int a,b,c;
	printf("enter the sides of the triangle\n");
	scanf("%d%d%d", &a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
	{
		printf("tiangle is valid\n");
	}
	else
	{
		printf("triangle is not valid\n");
	}
}
