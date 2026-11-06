// Write a C program to find sum of minor diagonal elements of a matrix.

#include <stdio.h>

void main()
{
	int i, j, sum =0, n;
	printf("enter the size of the 2d array\n");
	scanf("%d", &n);
	
	int a[n][n];
	printf("enter the elements in an array\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i+j == n-1)
			{
				sum = sum + a[i][j];
			}	
		}
	}
	printf("sum of diagonal elements is %d\n", sum);
}
	

