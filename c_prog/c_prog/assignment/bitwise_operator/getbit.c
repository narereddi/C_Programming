//Write a C program to get nth bit of a number.
#include <stdio.h>
void main()
{
	unsigned int num, position, k;
	printf("enter number and position of which bit needs to be get\n");
	scanf("%x", &num);
	scanf("%d", &position);
	printf("before the getting the bit number is %x\n", num);
	k = num>>position;
	printf("after the getting the bit number is\n");
	printf("%x\n", k);
	printf("%d\n", k);
	printf("%b\n", k);
}
