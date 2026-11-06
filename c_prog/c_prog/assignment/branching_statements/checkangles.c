//check angles and check triangle is valid or not.
#include <stdio.h>
void main()
{	float angle1,angle2,angle3;
	printf("enter the angles of a triangle\n");
	scanf("%f%f%f", &angle1,&angle2,&angle3);
	if(angle1+angle2+angle3==180)
	{
		printf("angles and triangle are valid\n");
	}
	else
	{
		printf("angles and triangle are not valid\n");
	}
}

