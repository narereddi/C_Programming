//Write a C program to interchange diagonals of a matrix.

#include <stdio.h>

void main()
{
	int i, j, n;
	printf("enter the size of the 2d array\n");
	scanf("%d", &n);
	
	int a[n][n];
	printf("enter the elements of 2d array\n");
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
			if(i == j )
			{
				a[i][j] = a[i][n-1-i];
			}
		}
	}

	printf("after interchanging the diagonals\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	
}
	

