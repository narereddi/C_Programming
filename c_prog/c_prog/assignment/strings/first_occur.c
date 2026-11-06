//Write a C program to find first occurrence of a character in a given string.

#include <stdio.h>

void main()
{
	int i;
	char str[50], k;
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the character to find its first occurance\n");
	scanf("%c", &k);
	
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i]==k)
		{
			printf("position of first occurance of %c is %d\n", k, i);
			break;
		}
	}
}
