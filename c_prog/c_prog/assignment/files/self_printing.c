#include <stdio.h>
#include <stdlib.h>
void main()
{
	
	FILE *fptr;	
	char ch;
	
	fptr = fopen("self_printing.c", "r");	
	if(fptr == NULL)
	{
		printf("error in opening file\n");
		return;
	}
	
	while( (ch = fgetc(fptr)) != EOF )
	{
		printf("%c", ch);
		
	}
	fclose(fptr);
}

