#include <stdio.h>
static int a;
void fun(void)
{
	printf("%d\n", a);
	a= a+2;
}

