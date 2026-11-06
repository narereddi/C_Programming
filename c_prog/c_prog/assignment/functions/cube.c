//Write a C program to find cube of any number using function.

#include <stdio.h>

int cube(int);


int main()
{
	int a, result;
	printf("enter the number\n");
	scanf("%d", &a);
	result=cube(a);
	printf("cube of a number %d is %d\n", a, result);
}

int cube(int a)
{
	int c;
	c = (a*a*a);
	return c;
}
