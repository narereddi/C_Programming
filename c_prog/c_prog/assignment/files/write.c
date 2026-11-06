#include <stdio.h>


void main()
{
	FILE *fptr;
	
	fptr= fopen("write_file.txt", "w");
	
	
	fputs("hyee hii\n", fptr);
	fputs("created write_file text file\n", fptr);
	
	fclose(fptr);
	printf("successfully completed\n");
}
	
