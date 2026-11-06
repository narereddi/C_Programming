#include <stdio.h>

void main()
{
	FILE *fptr;

	fptr = fopen("file1_1.txt", "w");
	fprintf(fptr, "hyee how are you\n");
	fprintf(fptr, "hyee \n");

	fclose(fptr);
	printf("written successfully\n");
}
