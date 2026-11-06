#include <stdio.h>
//#define SIZE 7

void main()
{
	int i, pos, SIZE; 
	printf("enter the size of the array\n");
	scanf("%d", &SIZE);
	int a[SIZE];
	printf("enter the array elements\n");
	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("enter the index position to delete\n");
	scanf("%d", &pos);
	
	for(i=pos; i<SIZE; i++)
	{
		a[i] = a[i+1];
	}
	SIZE--;

	for(i=0; i<SIZE; i++)
	{
		printf("%d ", a[i]);
	}
}
