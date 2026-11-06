#include <stdio.h>
void main()
{	
	int i,j, n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=i;j>=1;j--)
		{
			if(i%2 != 0 )
			{
				printf("%d ", i-j+1);
			}
			else
			{
				printf("%d ", j);
			}
		}
		printf("\n");
	}
}
