#include <stdio.h>
void main()
{
	int i,j, n;
	scanf("%d", &n);
	for(i=5; i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
}
