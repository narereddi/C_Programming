//Write a C program to find last occurrence of a character in a given string.

#include <stdio.h>

void main()
{
	int i, last_occur;	
	char str[50], k;
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the character to find its last occurance\n");
	scanf("%c", &k);
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == k)
		{
			last_occur=i;
		}
	}
	printf("last occurance of the character (%c) is %d\n", k, last_occur);
}
