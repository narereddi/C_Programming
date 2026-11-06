#include <stdio.h>

void main()
{
	int a[100], visited[100]={0};
	int i, j, n, duplicate =0, count =0;
	
	printf("enter the size of the array\n");
	scanf("%d", &n);
	
	printf("enter the elements in the array\n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		duplicate = 0;
		if(visited[i] == 1)
		{
			continue;
		}
		

		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				duplicate = 1;
				visited[j] =1;
			}
		}
		if(duplicate)
		{
			count++;
		}
	}
				
	printf("no of duplicates is %d\n",count);
}
