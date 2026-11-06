//Write a C program to find sum of each row and column of a matrix.
#include <stdio.h>

void main()
{
	int i, j, n, sum_row[100], sum_col[100];
	printf("enter the size of the 2d matrix\n");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		sum_row[i]= 0;
	}

	for(j=0; j<n; j++)
	{
		sum_col[j]= 0;
	}

	
	int a[n][n];
	printf("enter the elements of the 2d array\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("sum of elements in row wise ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum_row[i] = sum_row[i] + a[i][j];
		}
		printf("%d ", sum_row[i]);
	}
	printf("\n");
	
	printf("sum of elements in column wise ");
	for(j=0; j<n; j++)
	{
		for(i=0; i<n; i++)
		{
			sum_col[j] = sum_col[j] + a[i][j];
		}
		printf("%d ", sum_col[j]);
	}
	printf("\n");
}

