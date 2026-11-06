//Write a C program to replace last occurrence of a character with another in a string.

#include <stdio.h>

void main()
{
	int i, n=0;
	char k, ch, str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the character to be replaced by other character\n");
	scanf("%c", &k);
	
	printf("enter the character that replaces the first occurance charater\n");
	scanf(" %c", &ch);
	
	for(i=0; str[i] !='\0'; i++)
	{
		n++;
	}

	for(i=n-1; i>=0; i--)
	{
		if(str[i] == k)
		{
			str[i] = ch;
			break;
		}
	}
	for(i=0; str[i] !='\0'; i++)
	{
		printf("%c", str[i]);
	}
}
	
