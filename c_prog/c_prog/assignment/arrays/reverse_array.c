#include <stdio.h>
#define SIZE 6

void main()
{
	int i, temp;
	int a[SIZE];
	printf("enter the elements of array\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<SIZE/2; i++)
	{
		temp = a[i];
		a[i]= a[SIZE -i -1];
		a[SIZE -i -1] = temp;
		
	}

	for(i=0; i<SIZE; i++)
	{
		printf("%d ", a[i]);
	}
}
