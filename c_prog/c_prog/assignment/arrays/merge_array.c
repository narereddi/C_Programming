#include <stdio.h>

void main()
{

	int i, n;
	int a[100], b[100], c[100];
	printf("enter the size of the array\n");
	scanf("%d", &n);
	
	printf("enter the elements in the array a\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	printf("enter the elements in the array b\n");
	for(i=n; i<n+n; i++)
	{
		scanf("%d", &b[i]);
	}


	for(i=0; i<n; i++)
	{
		c[i] = a[i];
	}

	for(i=n; i<n+n; i++)
	{
		c[i] = b[i];
	}

	printf("elemets of the merge array is\n");
	for(i=0; i<n+n; i++)
	{
		printf("%d ", c[i]);
	}
	
}
