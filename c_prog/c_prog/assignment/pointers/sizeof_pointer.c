//The size is the same, but the type determines how much memory is accessed 
//through the pointer (e.g., 4 bytes for int, 1 byte for char).



#include <stdio.h>

void main()
{
	int *a;
	char *b;
	float *c;
	
	printf("Size of int pointer: %zu bytes\n", sizeof(a));
   	 printf("Size of char pointer: %zu bytes\n", sizeof(b));
   	 printf("Size of float pointer: %zu bytes\n", sizeof(c));
}
