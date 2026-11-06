#include <stdio.h>

void main()
{
	int i, a[5];
	printf("enter all array elements\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("negative numbers are ");
	for(i=0; i<5; i++)
	{
		if(a[i] <0)
		{
			printf("%d ", a[i]);
		}
	}
	printf("\n");
}
