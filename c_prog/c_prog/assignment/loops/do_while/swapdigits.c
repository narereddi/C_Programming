//64. Write a C program to swap first and last digits of any number.
#include <stdio.h>
void main()
{
	int num, first_digit, last_digit, temp;
	printf("enter the number\n");
	scanf("%d",&num);
	last_digit= num%10;
	do
	{
		first_digit= num%10;
		num=num/10;
	}
	while(num>0);
	printf("before swapping first digit is %d and last digit is %d\n", first_digit, last_digit); 	
        temp = first_digit;
	first_digit = last_digit;
	last_digit = temp;
	printf("before swapping first digit is %d and last digit is %d\n", first_digit, last_digit); 
}	
	
