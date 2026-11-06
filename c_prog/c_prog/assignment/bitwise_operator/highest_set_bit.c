//Write a C program to get lowest set bit of a number.
#include<stdio.h>

void main()
{
	int i, num,k, highest_bit; 
	printf("enter any hexa decimal number\n");
	scanf("%x", &num);
	for(i=0; i<=31; i++)
	{
		k = 0x1 & (num >>i);
		if(k == 1)
		{
			highest_bit = i;
		}
	}
	printf("highest_bit is %d\n", highest_bit);
}
