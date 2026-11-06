//Write a C program to check Least Significant Bit (LSB) of a number is set or not
#include <stdio.h>
void main()
{
	unsigned int num;
	printf("enter any number\n");
	scanf("%x", &num);
	if((num & 0x01) == 0)
	{
		printf("lsb is not set\n");
	}
	else
	{
		printf("lsb is set\n");
	}
}
