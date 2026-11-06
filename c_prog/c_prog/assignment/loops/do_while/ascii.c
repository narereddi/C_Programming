//72. Write a C program to print all ASCII character with their values.
#include <stdio.h>
void main()
{
	char ch=33;
	for(int i=ch;i<=127;i++)
	{
		printf("%c ", i);
	}
	printf("\n");
}
