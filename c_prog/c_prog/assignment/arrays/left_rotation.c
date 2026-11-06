//Write a C program to left rotate an array.
#include <stdio.h>

void main()
{
	int i, j, n, k, temp;
	int a[100];
	printf("enter the size of an array\n");
	scanf("%d", &n);
	
	printf("enter the elements of an array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}


	printf("enter the number how many times left rotate needs to perform\n");
	scanf("%d", &k);
	
	for(j=0; j<k; j++)
	{
	
		temp = a[0];
		for(i=0; i<n-1; i++)
		{
			a[i] = a[i+1];
		}
		a[n-1] = temp;
	
	}

	
	for(i=0; i<n; i++)
	{
		printf("%d", a[i]);
	}
}

	
	
