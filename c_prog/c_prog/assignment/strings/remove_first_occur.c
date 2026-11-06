//Write a C program to remove first occurrence of a character from string.

#include <stdio.h>

void main()
{
	int i, count=0;
	char k, str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	

	printf("enter the first occurrence of a character to be removed\n");
	scanf("%c", &k);
	
	printf("after removing first occurance of a character\n");
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == k && count==0)
		{
			count++;
			continue;
			
		}
		printf("%c", str[i]);
	}
}
