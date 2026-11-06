#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	if(n%2 ==0)
	printf("perfect x symbol is not possible\n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==j || i+j == n+1)
			printf("* ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
