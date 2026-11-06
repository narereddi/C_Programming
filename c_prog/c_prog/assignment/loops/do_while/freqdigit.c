//69. Write a C program to find frequency of each digit in a given integer.
#include <stdio.h>
void main()
{
	int num, digit, count =0;
	printf("enter any number\n");
	scanf("%d", &num);
	do
	{
		digit = num%10;
		do
		{
		
			int new_digit= digit;
			if(new_digit == digit)
			{
				count++;
			}
		}while()
	}
	while(num>0);
	printf("%d", count);
}

	
	
