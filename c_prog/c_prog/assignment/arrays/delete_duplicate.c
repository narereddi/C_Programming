#include <stdio.h>

void main()
{
	int i, j, n, a[100], duplicate =0; 
	printf("enter the size of the array\n");
	scanf("%d", &n);
	
	printf("enter the elements of the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i=0; i<n; i++)
	{
		duplicate =0;
		for(j=0; j<n; j++)
		{
			if(i != j && a[i] == a[j])
			{
				duplicate =1;
			}
		}
		if(duplicate)
		{
			continue;
		}
		else
		{
			printf(" elements after deleting the duplicates%d ", a[i]);
		}
	}
}
		
