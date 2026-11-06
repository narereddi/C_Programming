//Write a C program to copy all elements from an array to another array.
#include <stdio.h>

void main()
{
	int n;
	printf("enetr the size of the array\n");
	scanf("%d", &n);
	int i, a[n], b[n];

	printf("enter the elements in the array a\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		b[i] = a[i];
	}
	
	printf("elements in the array b are ");
	
	for(i=0; i<n; i++)
	{
		printf("%d ", b[i]);
	}
}	
