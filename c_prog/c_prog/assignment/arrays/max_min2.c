#include <stdio.h>

void main()
{
	int i , a[5], max, min;
	printf("enter the elements in the array\n");
	
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for(i=0; i<5; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	
	min = a[0];
	for(i=0; i<5; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}

	printf("max number is %d\n", max);
	printf("max number is %d\n", min);

}
