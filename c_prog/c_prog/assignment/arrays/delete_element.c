//Write a C program to delete an element from an array at specified position.
#include <stdio.h>

void main()
{
	int i, pos, n=6;
	int a[6] = {3, 4, 55, 2, 34, 21};
	printf("enter the index position to delete\n");
	scanf("%d", &pos);
	for(i=pos; i<=n-1; i++)
	{
		a[i] = a[i+1];
	}
	n--;
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}
	
	
	
	 
