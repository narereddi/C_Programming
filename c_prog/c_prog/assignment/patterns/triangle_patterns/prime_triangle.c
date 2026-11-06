#include <stdio.h>
void main()
{
	int i,j,n, flag =1, k=2;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{	flag =1;
			if(n%j==0)
			{
				flag =0;
				break;
			}
			if(flag ==1 && j<=i)
			{
				printf("%d", k);
				k++;
			}
		}
		printf("\n");
	}
}
	
