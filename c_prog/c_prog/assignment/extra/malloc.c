#include <stdio.h>
#include <stdlib.h>

void main()
{
	char *cptr, *chead, i, ch='A';

	cptr = (char *)malloc(sizeof(char)*10);

	if(cptr == NULL)
	{
		printf("memory allocation is failed\n");//error handling checking.
	}

	chead = cptr;
	
	for(i=0; i<10; i++)
	{
		*(cptr + i)= ch + i;
	}

	for(i=0; i<10; i++)
	{
		printf("address %p - character %c\n", (cptr +i), *(cptr + i));

	}
	free(chead);

}


