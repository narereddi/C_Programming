//Write a C program to check whether a number is even or odd using
//conditional/ternary operator
#include <stdio.h>
void main()
{
	int num, even_odd, even, odd;
	printf("enter any number\n");
	scanf("%d", &num);
	even_odd = (num%2 == 0) ? printf("%d is even\n", num): printf("%d is odd\n", num);

}
