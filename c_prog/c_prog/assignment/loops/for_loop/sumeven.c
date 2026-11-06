#include <stdio.h>
void main()
{
	int i,n, sum=0;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf("%d ", 2*i);
		sum = sum + 2*i;
	}
	printf("\n%d\n", sum);
}
