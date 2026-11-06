//remove all occurances of a character in a string 

#include <stdio.h>

void main()
{ 
	int i;
	char k, str[50];
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	printf("enter the character to be removed\n");
	scanf("%c", &k);
	
	for(i=0; str[i] !='\0'; i++)
	{
		if(str[i] == k)
		{
			continue;
		}
		printf("%c", str[i]);
	}
}

