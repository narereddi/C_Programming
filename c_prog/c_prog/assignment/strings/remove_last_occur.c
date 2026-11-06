//Write a C program to remove last occurrence of a character from string.

#include <stdio.h>

void main()
{
	int i;
	char str[69], k, var;
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);

	printf("printf the character to be removed in last occurance\n");
	scanf("%c", &k);
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i] == k)
		{
			
			var =i;
		}
			//printf("%c", str[i]);
	}
	//count1 = count;
	for(i=0; str[i] != '\0'; i++)
	{
		if(var==i)
		{
			continue;
		}
		printf("%c", str[i]);
	}
}
	
	
