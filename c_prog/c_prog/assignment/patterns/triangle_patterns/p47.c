#include <stdio.h>
#include <math.h>
void main()
{
	int i, j, n, val=1;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		for (j= 1; j <= pow(2, i) ; j++)
		{
			printf("%d ", val);
			val++;
		}
		printf("\n");
	}
}
