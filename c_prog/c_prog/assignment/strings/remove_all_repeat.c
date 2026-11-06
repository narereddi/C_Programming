//Write a C program to remove all repeated characters from a given string.

#include <stdio.h>

void main()
{
	int i, j, count[50]={0};
	char str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	for(i=0; str[i] !='\0'; i++)
	{
		for(j=0; str[j] !='\0'; j++)
		{	
			if(str[i] == str[j])
			{
				count[i]++;
			}
		}
		if(count[i]<2)
		{
			printf("%c", str[i]);
		
		}
	}
}
		
