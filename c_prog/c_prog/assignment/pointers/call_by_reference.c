#include <stdio.h>


void swap(int *, int *);
void main()
{
	int a, b;
	printf("enter the two numbers\n");
	scanf("%d %d", &a, &b);
	printf("before swapping a=%d and b=%d\n", a, b);
	swap(&a, &b);
	printf("before swapping a=%d and b=%d\n", a, b);
}


void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
	

