//addition matrix

#include <stdio.h>
int add(int a[3][3], int b[3][3], int size)
{
	int i, j, add[3][3];
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}

	printf("sum of the two matrices is\n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%d ", add[i][j]);
		}
	}
	printf("\n");
}
