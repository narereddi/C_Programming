//Write a C program to find maximum and minimum between two numbers using functions

#include <stdio.h>

void max_min(int , int);

void main()
{
	int a, b;
	printf("enter the two numbers\n");
	scanf("%d%d", &a, &b);
	max_min(a,b);
}

void max_min(int m, int n)
{
	int i, max, min;
	max = (m > n) ? m : n;
	min = (m < n) ? m : n;
	printf("max number between %d and %d is %d\n", min, max, max-1);
	printf("min number between %d and %d is %d\n", min, max, min+1);
}


