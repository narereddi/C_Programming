//Write a C program to get lowest set bit of a number.
#include <stdio.h>

void main()
{
	unsigned int num, i, lowest_bit;
	printf("enter any number\n");
	scanf("%x", &num);
	for(i=0; i<31; i++)
	{

		if( num & (0x1 << i))
		{
			lowest_bit = i;
			break;
		}
	}
	if(lowest_bit != -1)
	{
		printf("%d is the lowest bit\n", lowest_bit);
	}
	else
	{
		printf("no bits are set\n");
	}
}
	
	
	
