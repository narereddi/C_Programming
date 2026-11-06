//Write a C program to replace first occurrence of a character with another in a string.

#include <stdio.h>

void main()
{
	int i;
	char k, ch, str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the first occurance character\n");
	scanf("%c", &ch);
	
	printf("enter the required character to replace the first occurance of given character \n");
	scanf(" %c", &k);
	
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == ch)
		{
			str[i] = k;
			break;
		
		}
	}
	for(i=0; str[i] !='\0'; i++)
	{
		printf("%c", str[i]);
	}
}	
	
