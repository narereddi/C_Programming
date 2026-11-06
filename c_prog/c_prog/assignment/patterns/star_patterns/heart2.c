#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=3; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i+j >= n+1)
			printf("* ");
			else
			printf("  ");
		}
		for(j=1; j<=n; j++)
		{
			if(j<i)
			printf("* ");
			else
			printf("  ");
		}
		for(j=1; j<=n; j++)
		{
			if(i+j >= n+1)
			printf("* ");
			else
			printf("  ");
		}
		for(j=1; j<=n; j++)
		{
			if(j<i)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");

	}
	for(i=1; i<=1; i++)
	{
	 	for(j=1; j<=n+n; j++)
		{

			if(i == 1 && (j>=1 && j<=n-5)  || (j >= n+5 && j <= n+n) )
			{
				printf("* ");
			}
			else
			{
				printf("sai sriniv");
				break;
			}
		}
	}

	for(i=2; i<=n+n; i++)
	{ 	
		for(j=1; j<=n+n; j++)
		{
			if(j>=i)
			printf("* ");
			else
			printf("  ");
		}
		for (j=1; j<=n+n; j++)
		{
			if(i+j <= n+n)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}

}
