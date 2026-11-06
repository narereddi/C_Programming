//Write a C program to find lower triangular matrix.

#include <stdio.h>

void main()
{
	int i, j, n;
	printf("enter the size of the 2d array\n");
	scanf("%d", &n);
	
	int a[n][n];
	printf("enter the elements of the 2d array\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}


	printf("upper triangle is\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>=j)
			{
				printf("%d ", a[i][j]);
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
	

