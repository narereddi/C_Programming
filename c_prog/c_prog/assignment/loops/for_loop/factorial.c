//75. Write a C program to enter any number and calculate its factorial.
#include <stdio.h>
void main()
{
	int num, factorial=1, i;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		factorial= factorial*i;
	}
	printf("factorial is %d", factorial);
}
