// days into years, weeks and days.
#include <stdio.h>
void main()
{
	unsigned int total_days, years,weeks,days;
	printf("enter the days\n");
	scanf("%d", &total_days);
	years= (total_days/365);
	weeks= (total_days%365)/7;
	days= (total_days%365)%7;
	printf("%d years %d weeks and %d days\n", years, weeks,days);
}

