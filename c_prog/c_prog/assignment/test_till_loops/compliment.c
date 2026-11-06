//91. Write a C program to find one's complement of a binary number.
#include <stdio.h>
void main()
{
	unsigned int k;
	printf("enter anyt number\n");
	scanf("%x", &k);
	printf("actual binary number is %b\n", k);
	
	printf("compliment of the binary number is %b\n", ~(k));
}
	
