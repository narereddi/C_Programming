#include <stdio.h>

int fun(int , int);
int a=12;
	
void main()
{
	int sum;
	int a1, a2;
	printf("enter the two numbers\n");
	scanf("%d%d", &a1, &a2);
	
	sum = fun(a1, a2);
	printf("sum of the numbers is %d\n", sum);
}



