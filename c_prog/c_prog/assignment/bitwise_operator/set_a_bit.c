//Write a C program to set nth bit of a number.
#include <stdio.h>
void main()
{
	unsigned int num, position, k;
	printf("enter any number and position to set a bit \n");
	scanf("%x", &num);
	scanf("%d", &position);
	printf("before doing set a bit number is %x\n", num);
	k= (num | (0x01<< position));
	printf("after doing set a bit number is \n");
	printf("in hexa %x\n", k);
	printf("in decimal %d\n", k);
	printf("in binary %b\n", k);
}
	
