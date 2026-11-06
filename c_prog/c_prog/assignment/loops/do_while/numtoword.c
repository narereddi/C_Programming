//71. Write a C program to enter any number and print it in words.
#include <stdio.h>
void main()
{
	int num, digit, reversed_number=0, i, original_number;
	printf("enter any number\n");
	scanf("%d", &num);
	original_number = num;
	while(num > 0)
	{
		digit = num%10;
		reversed_number = reversed_number*10 + digit;
		num = num/10;
	}
	
	while(reversed_number > 0)
	{
		digit = reversed_number%10;
		reversed_number = reversed_number/10;
		switch(digit)
		{
			case 1 : 
				printf("one ");
				break;
			case 2 : 
				printf("two ");
				break;

			case 3 : 
				printf("three ");
				break;

			case 4 : 
				printf("four ");
				break;

			case 5 : 
				printf("five ");
				break;

			case 6 : 
				printf("six ");
				break;

			case 7 : 
				printf("seven ");
				break;

			case 8 : 
				printf("eight ");
				break;

			case 9 : 
				printf("nine ");
				break;

			case 0 : 
				printf("zero ");
				break;

		}
	}
	printf("\n");

}
