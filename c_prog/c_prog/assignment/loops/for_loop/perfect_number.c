#include <stdio.h>
#include <math.h>
void main()
{
	int num, perfect_num =0, i;
	printf("enter any number\n");
	scanf("%d", &num);
	for(i=1; i<num; i++)
	{
		if(num % i ==0)
		{
			perfect_num = perfect_num + i;
		}
	}
	if(num == perfect_num)
	{
		printf("it is perfect number\n");
	}
	else
	{
		printf("it is not perfect number\n");
	}
}
