//Write a C program to count total number of even and odd elements in an array.
#include <stdio.h>

void main()
{
	int i, a[10], even_count =0, odd_count=0;
	printf("enter the elements of the array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if( (a[i] % 2) ==0 )
		{
			even_count++;
		}
		else
		{
			odd_count++;
		}
	}
	printf("no of even numbers in the array is %d\n", even_count);
	printf("no of odd numbers in the array is %d\n", odd_count);
}
	
	
