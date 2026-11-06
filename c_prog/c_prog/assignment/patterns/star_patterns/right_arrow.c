#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; i+j <= n+1; j++)
		{
			if(i+j <= n+1)
			printf("* ");
			else
			printf("   ");
		}
		printf("\n");

	}


	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i+j >= n+1)
			printf("*");
			else
			printf("  ");
		}
		printf("\n");
	}

}
