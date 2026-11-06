#include <stdio.h>
int sub(int a[3][3], int b[3][3], int size)
{
	int i, j, sub[3][3];
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("subtraction of two matrices is\n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%d ", sub[i][j]);
		}
	}

}
