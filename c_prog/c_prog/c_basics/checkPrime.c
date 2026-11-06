#include <stdio.h>
int main()
{
	int n,i,isprime=1;
	printf("enter the number ");
	scanf("%d", &n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			isprime=0;
                        break;
		}
	}
	if(isprime)
	{
		printf("it is prime number\n");
	}
	else
	{
		printf("it is not a prime number\n");
	}
}	
