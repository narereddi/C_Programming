#include <stdio.h>
void main()
{
	int decimal =0, base=1, remainder;
	unsigned int  binary;
	printf("enter binary number\n");
	scanf("%d", &binary);
	while(binary>0)
	{
		remainder = binary%10;
		decimal = decimal + remainder*base;
		binary = binary/10;
		base = base*2;
	}
	printf("decimal number is %d", decimal);
}
	
