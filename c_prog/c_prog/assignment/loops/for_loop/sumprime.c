//81. Write a C program to find sum of all prime numbers between 1 to n.
#include <stdio.h>
#include <math.h>
void main()
{
	int num, i, j, flag =1, sum_of_prime = 0;
	printf("enter any number\n");
	scanf("%d", &num);
	printf("prime numbers are ");
	for(i=2; i<=num; i++)
	{	flag =1;
		for(j=2; j<=sqrt(i); j++)
		{
			if(i % j ==0)
			{
				flag = 0;
				break;
			}
		}
		if(flag)
		{
		printf("%d ", i);
  		sum_of_prime = sum_of_prime + i;
		}
	}
	printf("\nsum of the prime numbers are %d\n", sum_of_prime);
}
