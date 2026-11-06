//reverse number
#include <stdio.h>

int reverse(int c)
{
	int digit, reversed_num=0;
	while(c>0)
	{
		digit = c % 10;
		reversed_num = digit + reversed_num*10;
		c = c/10;
	}
	//printf("reversed number is\n")
	return reversed_num;
}
 
	


