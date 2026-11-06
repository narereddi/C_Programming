#include <stdio.h>
void main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<i+i;j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}
