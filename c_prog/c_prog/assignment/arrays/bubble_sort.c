#include <stdio.h>

void main()
{
	int i, j, temp;
	int a[5];
	printf("enter the elements in the array\n");
	for(i=0; i<5; i++)
	{
		scanf("%d", &a[i]);
	}

	for(j=0; j<5; j++)
	{
		for(i=0; i<5; i++)
		{
			if(a[i] > a[i+1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}
