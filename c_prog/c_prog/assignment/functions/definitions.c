

#include <stdio.h>


//1. fibanocci
int fibanocci(int m)
{
	int i, a=0, b=1, c;
	for(i=0; i<m; i++)
	{
		printf("%d ", a);
		c = a+b;
		a = b;
		b = c;
	}
}

//2. reverse.
int reverse(int c)
{
	int digit, reversed_num=0;
	while(c>0)
	{
		digit = c % 10;
		reversed_num = digit + reversed_num*10;
		c = c/10;
	}
	//printf("reversed number is\n")
	return reversed_num;
}
 
//3. prime.
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

//4. gcd


int gcd(int n1, int n2)
{	
	int i, min, gcd;
	min = (n1 < n2) ? n1 : n2;
	for(i=1; i <= min; i++)
	{
		if( (n1 % i ==0)  && (n2 % i ==0))
		{
			gcd = i;
		}
	}
	return gcd;
}

//5. swap

int swap(int a, int b)
{
	a= a+b;
	b= a-b;
	a= a-b;
	printf("swapping in swap definition file a=%d and b=%d\n", a, b);
}
