#include <stdio.h>
void main()
{
	int i, j, n;
	printf("enter any number\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(i <= n/2 +1 )
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d ", n-i +1);
			}
		}
		printf("\n");
	}
}	
