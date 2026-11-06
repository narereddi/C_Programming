//only definition is writing here.
#include <stdio.h>
int swap(int a, int b)
{
	a= a+b;
	b= a-b;
	a= a-b;
	printf("swapping in swap definition file a=%d and b=%d\n", a, b);
}
