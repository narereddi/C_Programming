//83. Write a C program to check whether a number is Armstrong number or not.

#include <stdio.h>
#include <math.h>
void main()
{
	int num, digit, original_number, count =0, new_original;
	double armstrong_number = 0.0;
	printf("enter any number\n");
	scanf("%d", &num);
	original_number = num;
	while(num>0)
	{
		digit = num%10;
		num = num/10;
		count++;
	}
	new_original = original_number;
	while(original_number>0)
	{
		digit = original_number%10;
		original_number = original_number/10;
		armstrong_number = armstrong_number + pow(digit , count);
	}

	if(new_original == (int)armstrong_number)
	{
		printf("%d is the armstrong number\n", new_original);
	}
	else
	{
		printf("%d is not an armstrong number\n", new_original);
	}
}
