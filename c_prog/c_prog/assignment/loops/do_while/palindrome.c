// 68. Write a C program to enter any number and check whether the number is palindrome or not

#include <stdio.h>
void main()
{
	int num, digit, reverse_number =0;
	printf("enter any number\n");
	scanf("%d", &num);
	int original_number = num;
	do
	{
		digit = num%10;
		reverse_number = reverse_number*10 + digit;
		num = num/10;
	}
	while(num>0);
	if(reverse_number == original_number)
	{
		printf("%d is palindrome\n", original_number);
	}
	else
	{
		printf("%d is not a palindrome\n",original_number);
	}
}
