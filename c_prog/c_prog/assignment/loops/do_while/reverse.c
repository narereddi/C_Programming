//67. Write a C program to enter any number and print its reverse.
#include <stdio.h>
void main()
{
	int num, digit, reverse_number=0;
	printf("enter the number\n");
	scanf("%d", &num);
	do
	{
		digit = num%10;
		reverse_number = reverse_number*10 + digit;
		num = num/10;
	}
	while(num>0);
	printf("reverse number is %d\n", reverse_number);
}
