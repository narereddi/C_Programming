#include <stdio.h>

void main()
{
	int i, j, n;
	printf("enter the number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf("%d ", j);
		}
		for(j=1; j<i; j++)
		{
			printf("5 ");
		}
		printf("\n");
	}
	
}
