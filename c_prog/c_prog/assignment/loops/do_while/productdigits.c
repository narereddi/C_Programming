//66. Write a C program to calculate product of digits of any number.
#include <stdio.h>
void main()
{
	int num, digit, product=1;
	printf("enter any number\n");
	scanf("%d", &num);
	do
	{
		digit = num%10;
		product = product*digit;
		num = num/10;
	}
	while(num>0);
	printf("product of the digits is %d\n", product);
}
