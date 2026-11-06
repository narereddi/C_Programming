#include <stdio.h>
void main()
{
	int i, n, sum=0;
	printf("enter any number\n");
	scanf("%d", &n);
	for(i=0; i<=n; i++)
	{
		printf("%d ", (2*i +1) );
		sum = (sum + (2*i +1) );
	}
	printf("\nsum is %d\n", sum);
}
