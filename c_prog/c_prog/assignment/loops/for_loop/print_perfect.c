//86. Write a C program to print all Perfect numbers between 1 to n.
#include <stdio.h>
#include <math.h>
void main()
{
	int num, perfect_num=0, i;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=1; i<num; i++)
	{
		for(int j=1; j<=num; j++)
		{
		
			if(i % j ==0)
			{
				perfect_num = perfect_num + j;
			}
	
			if(num == perfect_num)
			{
				printf("%d ", perfect_num);
			}
		}
	}
}
