//Write a C program to input any character and check whether it is alphabet, digit or
//special character
#include <stdio.h>
void main()
{
	char ch;
	printf("enter the any character\n");
	scanf("%c", &ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
	{
		printf("%c is a alphabet\n", ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%d is a number\n", ch);
	}
	else
	{
		printf(" %c is a special character\n", ch);
	}
}
