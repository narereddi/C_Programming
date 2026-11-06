//Write a C program to toggle case of each character of a string.

#include <stdio.h>

void main()
{
	int i;
	char str1[50], str2[50];
	printf("enter the string\n");
	fgets(str1, sizeof(str1), stdin);
	
	for(i=0; str1[i] !='\0'; i++)
	{
		if(str1[i]>='a' && str1[i] <='z')
		{
			str2[i] = str1[i]-32;
		}
		if(str1[i]>='A' && str1[i] <='Z')
		{
			str2[i] = str1[i] +32;
		}
	}
	
	printf("toggle output\n");
	for(i=0; str2[i]!='\0'; i++)
	{
		printf("%c", str2[i]);
	}
}
