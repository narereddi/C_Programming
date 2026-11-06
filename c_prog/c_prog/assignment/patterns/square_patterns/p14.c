#include<stdio.h>

void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=n; i>=1; i--)
	{
		for(j=n; j>=i; j--)
		{
			printf("%d ", j);
		}
		for(j=1; j<i; j++)
		{
			printf("%d ", i);
		}

		printf("\n");
	}
}
