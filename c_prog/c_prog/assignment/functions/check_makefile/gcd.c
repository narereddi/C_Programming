//definition of gcd

#include<stdio.h>

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
