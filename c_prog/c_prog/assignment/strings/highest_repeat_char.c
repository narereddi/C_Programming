//Write a C program to find highest frequency character in a string.

#include <stdio.h>

void main()
{
	
	int i, j, max;
	char var, str[50], counts[50]={0};
	printf("enter the string\n");
	fgets(str, sizeof(str), stdin);
	
	for(i=0; str[i] !='\0'; i++)
	{
		for(j=0; str[j]!='\0'; j++)
		{
			if(str[i] == str[j])
			{
				counts[i]++;
			}
		}
		printf("frequency of character (%c) is %d\n", str[i], counts[i]);
	}
	
	max = counts[0];
	for(i=0; counts[i] !='\0'; i++)
	{
		if(counts[i] > max)
		{
			max=counts[i];
			var = i;
		}
	}
	printf("highest frequency of character (%c) is %d\n", str[var], max);
		
}
