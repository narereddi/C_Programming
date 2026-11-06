#include <stdio.h>

void main()
{
	int i, j, a[10], max, min, temp;
	printf("enter the elements of the array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(j=0; j<10; j++)
	{
		for(i=0; i<10; i++)
		{

			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i]= a[i+1];
				a[i+1] = temp;
			}
		}
	}
		

	printf("max number in the array is %d\n", a[9]);
	printf("minimum number in the array is %d\n", a[0]);
}

