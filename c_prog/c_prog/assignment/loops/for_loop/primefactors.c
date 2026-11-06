//82. Write a C program to enter any number and print its prime factors.
#include <stdio.h>
#include <math.h>
void main()
{
	int num, i, j, flag =1, sum_of_prime = 0;
	printf("enter any number\n");
	scanf("%d", &num);
	printf("prime factors are ");
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
		if((flag ==1) && (num%i == 0))
		{
  		printf("%d ", i);
		}
	}
	printf("\n");
}

