//Write a C program to count total number of vowels and consonants in a string.

#include <stdio.h>

void main()
{
	int i, count_vowel=0, count_cons=0;
	char str[100];
	printf("enter the string\n");
	scanf("%s", str);
	//fgets(str, sizeof(str), stdin);
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
		   	str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			count_vowel++;
		}
		else
		{
			count_cons++;
		}
	}
	printf("no of vowels in a string is%d\n", count_vowel);
	printf("no of consonants in a string is%d\n", count_cons);
}

	
