//find the third angle of a triangle.
#include <stdio.h>
void main()
{
	unsigned int first_angle,second_angle,third_angle;
        printf("enter the two angles of a triangle\n");
	scanf("%d%d", &first_angle,&second_angle);
	third_angle=180-(first_angle + second_angle);
	printf("third angle of a trinale is %d\n",third_angle);
}                                         
