//Write a C program to sort even and odd elements of array separately.
#include <stdio.h>

void main()
{
	
	int i, j, n, even_count=0, odd_count=0, temp1, temp2;
	int a[100], even[100], odd[100];
	printf("enter the size of the array\n");
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
	
	
	for(j=0; j<odd_count; j++)
	{
		for(i=0; i<odd_count; i++)
		{
			if(odd[i]>odd[i+1])
			{
				temp1 = odd[i];	
				odd[i]= odd[i+1];
				odd[i+1] = temp1;
			}
		}
	}

	
	for(j=0; j<even_count; j++)
	{
		for(i=0; i<even_count; i++)
		{
			if(even[i]>even[i+1])
			{
				temp2 = even[i];	
				even[i]= even[i+1];
				even[i+1] = temp2;
			}
		}
	}


	printf("after sorting elements in the each array are\n");
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
	
