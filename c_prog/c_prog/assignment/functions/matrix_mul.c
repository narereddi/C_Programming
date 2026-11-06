
#include <stdio.h>

int mul(int a[3][3], int b[3][3], int size)
{
	int i, j, k;
	int mul[3][3];
	
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			mul[i][j] =0;
		}
	}

	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			for(k=0; k<size; k++)
			{
		
				mul[i][j] = mul[i][j] + a[i][k]*b[k][j];
			}
		}
	}

	printf("\n");
	for(i=0; i<size; i++)
	{
		for(j=0; j<size; j++)
		{
			printf("%d ", mul[i][j]);
		}
	}


}
	
