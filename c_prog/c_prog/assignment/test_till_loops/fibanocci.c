//89. Write a C program to print Fibonacci series up to n terms.
#include <stdio.h>
void main()
{
	int f1 =0, f2 = 1, f3, num, i;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=1; i<=num;i++)
	{
		printf("%d ", f1);
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	printf("\n");
}
