//Write a C program to input basic salary of an employee and calculate its Gross
//salary according to following:
/*
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
*/
#include <stdio.h>
void main()
{
	float basic_salary, gross_salary, HRA, DA;
	printf("enter the basic salary\n");
	scanf("%f", &basic_salary);
	if(basic_salary <= 10000)
	{	HRA = (10*10000)/100.0;
		DA =  (80*10000)/100.0;
		gross_salary = basic_salary + HRA + DA;
		printf("gross salary is %f\n", gross_salary);
	}
	else if(basic_salary <= 20000 && basic_salary > 10000)
	{	HRA = (20*20000)/100.0;
		DA =  (90*20000)/100.0;
		gross_salary = basic_salary + HRA + DA;
		printf("gross salary is %f\n", gross_salary);
	}
	else
	{	HRA = (30*basic_salary)/100.0;
		DA =  (95*basic_salary)/100.0;
		gross_salary = basic_salary + HRA + DA;
		printf("gross salary is %f\n", gross_salary);
	}
}
