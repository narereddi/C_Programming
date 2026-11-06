#include <stdio.h>
#include <stdlib.h>

void check(int depth)
{
	char c;
	char *ptr = malloc(1);
	printf("stack at %p ,heap at %p\n",&c , &ptr);
	
	if(depth <= 0)
	{
		return ;
	}
	
	check(depth -1);
	
}
void main()
{
	check(10);
}
