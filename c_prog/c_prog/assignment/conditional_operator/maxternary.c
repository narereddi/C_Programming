//Write a C program to find maximum between two numbers using conditional/ternary
//operator.
#include <stdio.h>
void main()
{
	int num1, num2, max;
	printf("enter the any two numbers\n");
	scanf("%d%d", &num1, &num2);
	max = num1 > num2 ? num1 : num2;
	printf("%d is maximum number\n", max);
}
