//Write a C program to input marks of five subjects Physics, Chemistry, Biology,
//Mathematics and Computer. Calculate percentage and grade according to following:
/*
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/
#include <stdio.h>
void main()
{
	float Physics, Chemistry, Biology, Mathematics, Computer, percentage, total_marks;
	printf("enter the marks of Physics, Chemistry, Biology, Mathematics, Computer\n");
        scanf("%f%f%f%f%f", &Physics, &Chemistry, &Biology, &Mathematics, &Computer);
	total_marks = Physics + Chemistry + Biology + Mathematics + Computer;
	percentage = ((total_marks)/500)*100;

	printf("percentage is %.3f\n", percentage);
	if(percentage >= 90)
	{
		printf("grade A\n");
	}
	if(percentage >= 80  && percentage <90)
	{
		printf("grade B\n");
	}
	if(percentage >= 70 && percentage < 80)
	{
		printf("grade C\n");
	}
	if(percentage >= 60 && percentage < 70)
	{
		printf("grade D\n");
	}
	if(percentage >= 40  && percentage < 60)
	{
		printf("grade E\n");
	}
	if(percentage <= 40)
	{
		printf("grade F\n");
	}
}
