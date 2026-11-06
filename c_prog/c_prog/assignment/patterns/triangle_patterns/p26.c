#include <stdio.h>
void main()
{
	int i,j;
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=i; j--)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
