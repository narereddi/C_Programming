#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i == n || j==1 || i == j)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
