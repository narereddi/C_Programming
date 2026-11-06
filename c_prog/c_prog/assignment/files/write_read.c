#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fptr;
	char data[100];

	fptr = fopen("read_write.txt", "w");
	if (fptr == NULL) 
	{
        	printf("Error opening file!\n");
       		exit(1);
    	}
	fprintf(fptr, "hyee this is write read file\n");
	fclose(fptr);

	fptr = fopen("read_write.txt", "r");
	if(fptr == NULL)
	{	
		printf("error opening the file\n");
		exit(1);
	}
	
	while(fgets(data , 100, fptr))
	{
		printf("%s", data);
	}
	fclose(fptr);
	
	

}
