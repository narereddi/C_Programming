//arrays passed as arguments in functions 

#include <stdio.h>

void array1(int [], int );
void main()
{
	int a[] = {1, 5, 3, 65, 12};
	int size = sizeof(a)/sizeof(a[0]);
	array1(a, size);
}
