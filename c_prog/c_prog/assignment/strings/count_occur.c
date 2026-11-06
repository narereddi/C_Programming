//Write a C program to count occurrences of a character in given string.


#include<stdio.h>

void main()
{
	int i, count=0;
	char k, str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the character to search all occurances of it\n");
	scanf("%c", &k);
	
	//printf("occurances of character %c are ", k);
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] ==k)
		{
			count++;
		}
	}
	printf("total occurances of a character (%c) is %d\n", k, count);
}
