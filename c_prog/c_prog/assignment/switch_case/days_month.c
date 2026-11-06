//Write a C program print total number of days in a month using switch case
#include <stdio.h>
void main()
{
	int month_number;
	printf("enter the month number\n");
	scanf("%d", &month_number);
	switch(month_number)
	{
		case 1:
			printf("january 31 days\n");
			break;
		case 2:
			printf("febuary 28/ 29 days\n");
			break;
		case 3:
			printf("march 31 days\n");
			break;
		case 4:
			printf("april 30 days\n");
			break;
		case 5:
			printf("may 31 days\n");
			break;
		case 6:
			printf("june 30 days\n");
			break;
		case 7:
			printf("july 31 days\n");
			break;
		case 8:
			printf("august 31days\n");
			break;
		case 9:
			printf("septembet 30 days\n");
			break;
		case 10:
			printf("october 31 days\n");
			break;
		case 11:
			printf("november 30 days\n");
			break;
		case 12:
			printf("december 31 days\n");
			break;
		default: 
			printf("invalid input\n");
		}
}

