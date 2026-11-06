#include <stdio.h>
void main()
{
	int i,j,n;
	printf("enter any number\n");
	scanf("%d", &n);
	if(n%2 ==0 )
	printf("star formation not possible\n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(n%2 != 0 && (i == n/2 +1 || j == n/2 +1) )
			printf("+ ");
			else
			printf("  ");
		}
		printf("\n");
	}
}
			
