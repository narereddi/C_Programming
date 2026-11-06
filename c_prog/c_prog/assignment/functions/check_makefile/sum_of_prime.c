//sum of prime

#include <stdio.h>
#include <math.h>

int sum_of_prime(int num)
{
	int i, j, flag=0, sum=0;
	for(i=2;i<=num; i++)
	{
		flag =0;
		for(j=2; j<=sqrt(i); j++)	
		{
			if(i%j ==0)
			{
				flag =1;
				break;
			}
		}
		if(flag == 0)
		{
			sum = sum + i;
		}
	}
	printf("sum of n prime numbers is %d", sum);
}
