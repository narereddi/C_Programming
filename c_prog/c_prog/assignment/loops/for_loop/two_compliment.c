//92. Write a C program to find two's complement of a binary number.
#include <stdio.h>
void main()
{
	int num;
	printf("enter any number\n");
	scanf("%x",&num);
	printf("actual binary number is %b\n", num);
	printf("2's compliment is %b\n", ~(num)+1);
}
