//65. Write a C program to calculate sum of digits of any number.
#include <stdio.h>
void main()
{
	int num, digit, sum=0;
	printf("enter the number\n");
	scanf("%d", &num);
	do
	{
		digit = num%10;
		sum = sum + digit;
		num = num/10;
	}
	while(num>0);
	printf("sum of the digits in a number is %d\n", sum);
}
