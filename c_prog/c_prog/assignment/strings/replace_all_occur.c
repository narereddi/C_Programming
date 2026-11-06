//Write a C program to replace all occurrences of a character with another in a string.

#include <stdio.h>

void main()
{
	int i;
	char k, ch, str[50];
	printf("enter any string\n");
	fgets(str, sizeof(str), stdin);
		
	printf("enter the character to be replaced\n");
	scanf("%c", &k);
	
	printf("enter the character to replace the first occurance character\n");
	scanf(" %c", &ch);

	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == k)
		{
			str[i] = ch;
		}
		printf("%c", str[i]);
	}
}
