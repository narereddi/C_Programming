//80. Write a C program to print all Prime numbers between 1 to n.
#include <stdio.h>
#include <math.h>
void main()
{
	int num, i, j, flag =1;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=2;i<=num;i++)
	{	flag =1;
		for(j=2; j <=sqrt(i); j++)
		{
			if(i%j == 0)
			{
				flag =0;
				break;
			}
		}
		if(flag)
		{
			printf("%d ", i);
		}
	}
}
