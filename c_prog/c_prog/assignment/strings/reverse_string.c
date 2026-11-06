//Write a C program to find reverse of a string.

#include <stdio.h>
#include <string.h>

void main()
{
	int i, temp, n;
	char str[50];
	printf("enter any string\n");
	fgets(str, sizeof(str), stdin);

	n= strlen(str);
	for(i=0; i<n/2; i++)
	{
		temp= str[i];
		str[i]= str[n-i-1];
		str[n-i-1]= temp;
	}

	printf("reversed string is\n");
		
	for(i=0; str[i]!='\0'; i++)
	{
		printf("%c", str[i]);
	}
}
