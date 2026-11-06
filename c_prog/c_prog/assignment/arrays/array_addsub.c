#include <stdio.h>

void main()
{
	int i, a[5], b[5], sum[5], sub[5];
	printf("enter 5 elements of array a\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter 5 elements of array b\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("addition of 5 numbers is ");
	for(i=0; i<5; i++)
	{
		 (sum[i]= a[i] + b[i]);
		sub[i] = (a[i] - b[i]);
		printf("%d ", sum[i]);
		
	}
	printf("\n");
	printf("subtraction of 5 numbers is ");

	for(i=0; i<5; i++)
	{
		sub[i] = (a[i] - b[i]);
		printf("%d ", sub[i]);
		
	}

}
		
