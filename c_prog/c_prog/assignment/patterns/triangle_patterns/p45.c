#include <stdio.h>
void main()
{
	int i,j,n, k=1;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(j<=i)
			{
				printf("%d ", k);
				k++;
			}
		}
		printf("\n");
	}
}
