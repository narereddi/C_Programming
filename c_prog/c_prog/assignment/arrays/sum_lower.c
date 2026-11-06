#include <stdio.h>

void main()
{
	int i, j, n, sum=0;
	printf("enter the size of the 2d array\n");
	scanf("%d", &n);
	
	int a[n][n];
	printf("enter the elemets of the 2d array\n");
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


	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(i>=j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("sum is %d", sum);
}

