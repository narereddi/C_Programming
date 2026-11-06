// Write a C program to count total number of notes in given amount.
#include <stdio.h>
void main()
{	
	int amount,no_of_2000 = 0, no_of_500 = 0, no_of_200 = 0 , no_of_100 = 0, no_of_50 = 0, no_of_20 = 0,no_of_10 = 0;
	printf("enter the amount\n");
	scanf("%d",&amount);
	if(amount>=2000)
	{
		no_of_2000 =amount/2000;
		amount=amount%2000;
	}
	if(amount>=500)
	{
		no_of_500 =amount/500;
		amount=amount%500;
	}
	if(amount>=200)
	{
		no_of_200 =amount/200;
		amount=amount%200;
	}
	if(amount>=100)
	{
		no_of_100 =amount/100;
		amount=amount%100;
	}
	if(amount>=50)
	{
		no_of_50 =amount/50;
		amount=amount%50;
	}
	if(amount>=20)
	{
		no_of_20 =amount/20;
		amount=amount%20;
	}
	if(amount>=10)
	{
		no_of_10 =amount/10;
		amount=amount%10;
	}

	printf(" no of 2000 notes : %d\n", no_of_2000);
	printf(" no of 500 notes : %d\n", no_of_500);
	printf(" no of 200 notes : %d\n", no_of_200);
	printf(" no of 100 notes : %d\n", no_of_100);
	printf(" no of 50 notes : %d\n", no_of_50);
	printf(" no of 20 notes : %d\n", no_of_20);
	printf(" no of 10 notes : %d\n", no_of_10);
}
