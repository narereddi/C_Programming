//fibonacci

#include <stdio.h>

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
