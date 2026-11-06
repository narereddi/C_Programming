//Write a C program to find maximum between three numbers using conditional/ternary
//operator.
#include <stdio.h>
void main()
{
	int num1, num2, num3, max;
	printf("enter any three numbers\n");
	scanf("%d%d%d", &num1, &num2,&num3);
	max= ((num1 > num2) && (num1 > num3)) ? num1 : (num2 || num3);
	max= ((num2 > num1)  && (num2 > num3)) ? num2 : num3;
	printf("max number is %d\n", max);
}
