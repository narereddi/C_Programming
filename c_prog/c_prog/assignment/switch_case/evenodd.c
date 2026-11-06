//43. Write a C program to check whether a number is even or odd using switch case.

#include <stdio.h>
void main()
{
	int num;
	printf("enter any number\n");
	scanf("%d", &num);
	switch(num%2==0)
	{
		case 1 : 
			printf("%d is the even number\n", num);
			break;
		case 0 :
			printf("%d is the odd number\n", num);
	}
}
