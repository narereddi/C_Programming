#include <stdio.h>

void main()
{
	int i, j, a[10], second_max, second_min, temp;
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
	printf("%d is the second highest\n", a[8]);
	printf("%d is the second lowest\n", a[1]);
}

	
