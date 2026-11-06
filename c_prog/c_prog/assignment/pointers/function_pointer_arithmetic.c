#include <stdio.h>

void (*fptr1)(int[], int[], int[]);
void (*fptr2)(int[], int[], int[]);

void add(int a[10], int b[10], int size )
{
	int i, add[size];
	
	for(i=0; i<size; i++)
	{
		add[i] = a[i] + b[i];
		printf("%d ", add[i]);

	}
	printf("\n");
}

void sub(int a[10], int b[10], int size )
{
	int i, sub[size];
	
	for(i=0; i<size; i++)
	{
		sub[i] = a[i] - b[i];
		printf("%d ", sub[i]);
	}
	printf("\n");
}

void main()
{
	int n, i;
	printf("enter the size of an array\n");
	scanf("%d", &n);
	int a[n], b[n];
	printf("enter the elements of the array a\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("enter the elements of the array b\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &b[i]);
	}

	fptr1 = add;
	fptr2 = sub;
	fptr1(a, b, n);
	fptr2(a, b, n);	
}
	
