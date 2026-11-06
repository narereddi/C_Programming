#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n;j++)
		{
			if(i+j == n+1 || i==n)
			printf("* ");
			else
			printf("  ");
		}
		for(j=1; j<n; j++)
		{
			if(i ==  j+1 || i==n)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}

