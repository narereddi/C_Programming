#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE *fptr;
	char ch;

	fptr = fopen("single_character.txt", "w");
	if(fptr == NULL)
	{
		printf("error file is not opening\n");
		return;
	}

	fputc('B', fptr);
	fputc('s', fptr);
	fputc('a', fptr);
	fputc('i', fptr);
	fclose(fptr);

	fptr = fopen("single_character.txt", "r");
	if(fptr == NULL)
	{
		printf("error file is not opening\n");
		return;
	}

	while( (ch = fgetc(fptr))  != EOF)
	{
		printf("%c", ch);
	}
	fclose(fptr);
}
	

