#include <stdio.h>
void main()
{
	float s1,s2,s3,s4,s5;
	float average, total_marks, percentage;
	printf("enter the marks of five subjects\n");
	scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);
	average =(s1+s2+s3+s4+s5)/5.0;
	total_marks=s1+s2+s3+s4+s5;
	percentage=((s1+s2+s3+s4+s5)/500)*100;
	printf("total marks is %.3f\n", total_marks);
	printf("average marks is %.3f\n", average);
	printf("percentage of marks is %.3f\n", percentage);
}



