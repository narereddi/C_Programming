//Write a C program to print all unique elements in the array.
#include <stdio.h>

void main()
{
	int i, j,  a[100] = { 1, 2, 3, 4, 1, 2, 4, 5, 6, 9}, flag;
	printf("enter the elements in the array\n");
	//for (i=0; i<10; i++)
//	{
	//	scanf("%d", &a[i]);
//	}
	
	for(i=0; i<10; i++)
	{
		flag=1;
	
	
		for(j=0; j<10; j++)
		{
			if(j != i && a[i] == a[j])
			{
				flag =0;
				break;
			}

		
			//if(flag == 0)
			//{
			//	printf("%d ", a[i]);
			//}
		}
		if(flag)
		{
			printf("%d ", a[i]);
		}

	}
	printf("\n");
}
		
		
	
