//prime number
	
#include <stdio.h>

int prime(int n)
{
	int i, flag =0;
	for(i=2; i<n; i++)
	{
		if(n % i == 0)
		{
			flag = 1;
		}
	}
	if(flag)
	{
		printf("it is not prime number\n");
	}
	else
	{
		printf("it is prime number\n");
	}


}
