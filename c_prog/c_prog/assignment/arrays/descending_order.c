//Write a C program to sort array elements in descending order.
#include <stdio.h>

void main()
{
	int i, j, n, temp;
	int a[100];
	printf("enter the size of the array\n");
	scanf("%d", &n);
	
	printf("enter the elements of the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			if(a[i] < a[i+1])
			{
				temp = a[i];
				a[i]= a[i+1];
				a[i+1]= temp;
			}
		}
	}
	
	printf("elements in the reverse order is\n");
		
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
	
}
