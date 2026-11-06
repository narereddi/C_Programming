//Write a C program to input electricity unit charges and calculate total electricity bill
//according to the given condition

/*For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
void main()
{
	int units;
	float electricity_bill, extra_bill;
	printf("enter the units of electricity\n");
	scanf("%d", &units);
	if(units<=50)
	{
		electricity_bill = 0.5*units;
		printf("total electricity bill is %f\n", electricity_bill);
	}
	else if((units>50) && (units<=150))
	{
		electricity_bill = 0.75*units;
		printf("total electricity bill is %f\n", electricity_bill);
	}
	else if ((units>150) && (units<=250))
	{
		electricity_bill = 1.20*units;
		printf("total electricity bill is %f\n", electricity_bill);
	}
	else if (units>250)
	{
		electricity_bill = 1.50*units;
		extra_bill = electricity_bill*(20/100);
		electricity_bill = electricity_bill + extra_bill;
		printf("total electricity bill is %f\n", electricity_bill);
	}
}
