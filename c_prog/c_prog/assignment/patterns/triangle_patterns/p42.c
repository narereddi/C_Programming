#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(j<i)
			printf("%d ", 2*j+2);
		}
		for(j=2*i; j>=1; j--)
		{
			if(j<i)
			printf("%d ", 2*j);
		}
		printf("\n");
	}
}
