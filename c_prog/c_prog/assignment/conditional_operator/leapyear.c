//Write a C program to check whether year is leap year or not using conditional/ternary
//operator.
#include <stdio.h>
void main()
{
	int year, leap_year;
	printf("enter the year\n");
	scanf("%d", &year);
	leap_year = (year % 4 == 0) && (year %100 !=0) || (year % 400 ==0) ? printf("%d is leap year\n", year) : printf("%d is not a leap year\n", year);
	
}
