//Write a C program to check whether two matrices are equal or not.
#include <stdio.h>

void main()
{
	int i, j, n, flag =0;

	printf("enter the size of an 2d array\n");
	scanf("%d", &n);
	int a[n][n], b[n][n];
	
	printf("enter the elements in the 2d array of a\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("enter the elements in the 2d array of b\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i][j] != b[i][j])
			{
				flag =1;
				break;
			}
		}
	}
	if(flag)
	{
		printf("matrices are not equal\n");
	}
	else
	{
		printf("matrices are equal\n");
	}

}

	
	
	
