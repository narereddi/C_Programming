#include <stdio.h>

void main()
{
	unsigned int num, i, lowest_bit, k;
	printf("enter any number\n");
	scanf("%x", &num);
	for(i=0; i<31; i++)
	{
		k = 0x01 & (num >> i);
		if( k == 1)
		{
			lowest_bit = i;
			break;
		}
	}
	printf("%d is the lowest bit\n", lowest_bit);
	printf("no of trailing zeroes is also %d\n", lowest_bit);
	
}

