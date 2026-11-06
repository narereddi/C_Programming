#include <stdio.h>

void main()
{
	unsigned int i, num, ones=0, zeros=0;
	printf("enter any hexa decimal number\n");
	scanf("%x", &num);
	for(i=0; i<32; i++)
	{
		if( (num>>i & 0x1) ==1)
		{
			ones++;
		}
		else
		{
			zeros++;
		}
	}
	printf("number of zeroes and ones are %d and %d", zeros, ones);
}
