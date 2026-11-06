#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=0; j>=0; j--)
		{
			printf("* ");
		}

		for(j=1; j<i; j++)
		{
			printf("%d ", j);
		}
		for(j=i; j>=1; j--)
		{
			printf("%d ", j);
		}
		for(j=0; j>=0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}

	for(i=1; i<=n; i++)
	{
		for(j=0; j>=0; j--)
		{
			printf("* ");
		}

		for(j=1; j<n-i; j++)
		{
			printf("%d ", j);
		}
		for(j=n-i; j>=1; j--)
		{
			printf("%d ", j);
		}
		for(j=0; j>=0; j--)
		{
			printf("* ");
		}

		printf("\n");
	}

}

