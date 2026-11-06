//Write a C program to count total number of duplicate elements in an array.
#include <stdio.h>

void main()
{	
	int i, j, count=0 ,flag = 1;
	int a[100]= {1, 2, 1, 1, 3, 3, 5, 6};
	for(i=0; i<8; i++)
	{
		flag =1;
		
			for(j=i+1; j<8; j++)
			{
				if(a[i] == a[j])
				{
					flag =0;
					break;
				}
			}
			if(flag ==0)
			{
				count++;
			}
	}
	printf(" no of duplicate numbers are %d\n", count);
}
	
	
