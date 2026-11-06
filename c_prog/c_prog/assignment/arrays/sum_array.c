#include <stdio.h>

void main()
{
	int i, a[10], sum =0;
	printf("enter the elements in the array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		sum += a[i];
	}
	printf("sum of the elements in the array is %d\n", sum);
}
