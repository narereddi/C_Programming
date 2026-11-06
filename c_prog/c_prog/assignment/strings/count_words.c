//Write a C program to count total number of words in a string.

#include <stdio.h>

void main()
{
	int i, count_word=0, total_words;
	char str[100];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
		
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == ' ')
		{
		 count_word++;
		}
	}
	total_words= count_word + 1;
	printf("no of words in a given string is%d\n", total_words);
}
