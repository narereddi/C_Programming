#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
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
		printf("\n");
	}


	for(i=2; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j>=i)
			printf("* ");
			else
			printf("  ");
		}
		for(j=1; j<=n; j++)
		{
			if(i+j<=n)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
