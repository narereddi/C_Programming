#include <stdio.h>

void main()
{
	int i,j,n;
	printf("enter the any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(i == j )
			{
				printf("%d ", i);
			}
			else
			{
				printf("  ");
			}
		}
		for(j=1; j<=n-i-1; j++)
		{
			printf(" ");
		}
		for(j=1; j<=n; j++)
		{
			if(i + j == n + 1)
			{
				printf("%d ", i);
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}

	for(i=1; i<=n; i++)
	{
		for(j=1; j<n; j++)
		{
			if(i+j == n+1)
			{
				printf("%d ", j);
			}
			else
			{
				printf("  ");
			}
		}

		for(j=1; j<n; j++)
		{
			if(i == j)
			{
				printf(" %d", n-i);
			}
			else
			{
				printf("  ");
			}
		}

		printf("\n");
	}


}
