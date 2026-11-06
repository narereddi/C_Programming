#include <stdio.h>
#include <stdlib.h>

void main()
{
	unsigned char *cptr, *chead, i, n, ch = 1;
	printf("enter the number of blocks to be allocated\n");
	scanf("%d", &n);
	cptr = (char *)calloc(n, sizeof(char)*10);
	
	if(cptr == NULL)
	{
		printf("memory allocation is failed\n");
	}
	chead = cptr;
	for(i=0; i<n*10; i++)
	{
		*(cptr + i) = ch + i;
	}
	
		for(i=0; i<n*10; i++)
	{
		printf("addresss - %p and value - %d\n", (cptr + i), *(cptr + i));
	}

	free(chead);
}	

