#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the sides of the triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	if(  (a==b) && (b==c) && (c==a))
	{
		printf(" it is equilateral triangle\n");
	}
	else if (((a==b) || (b==c) || (c==a)) && ( (a+b >c) && (b+c >a) && (c+a >b) ))
	{
		printf(" it is isosceles triangle\n");
	}
	else
	{
		printf("it is normal triangle\n");
	}
}
