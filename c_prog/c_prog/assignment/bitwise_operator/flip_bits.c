#include <stdio.h>

void main()
{
	int num, need_to_flip, k;
	printf("enter the hexa decimal number\n");
	scanf("%x", &num);
	printf("enter no of bits needs to flip\n");
	scanf("%x", &need_to_flip);
	k = num ^ (need_to_flip);
	printf("number before flipping is %x\n", num);
	printf("number after flipping is %x\n", k);
	
}	
