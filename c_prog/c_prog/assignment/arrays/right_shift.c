//Write a C program to right rotate an array.
#include <stdio.h>

void main()
{
	int i, j, k, temp, n;
	int a[100];
	printf("enter the size of the array\n");
	scanf("%d", &n);
	
	printf("enter the elements of an array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("enter the number of elements needs to be right shifted\n");
	scanf("%d", &k);
	
	for(j=0; j<k; j++)
	{
		temp = a[n-1];
		for(i=n-1; i>0; i--)
		{
			a[i]=a[i-1];
		}
		a[0]= temp;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
	
	
}
