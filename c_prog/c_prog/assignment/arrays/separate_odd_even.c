//Write a C program to put even and odd elements of array in two separate array.
#include <stdio.h>

void main()
{
	
	int i, n, even_count=0, odd_count=0;
	int a[100], even[100], odd[100];
	printf("enter the elements in the array\n");
	scanf("%d", &n);
	
	printf("enter the elements in the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(a[i] % 2 == 0)
		{
			even[even_count]= a[i];
			even_count++;
		}
		else
		{
			odd[odd_count]= a[i];
			odd_count++;
		}
	}
	
	

	printf("odd elements in the array\n");
	for(i=0; i<odd_count; i++)
	{
		printf("%d ", odd[i]);

	}

	printf("even elements in the array\n");
	for(i=0; i<even_count; i++)
	{
		printf("%d ", even[i]);
	}
}
	
