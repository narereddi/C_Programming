//2d array addition
#include <stdio.h>
#include "arithmetic.h"
//int add(int [3][3], int [3][3], int );
int main()
{
	//int n;
//	printf("enter the order of matrix\n");
//	scanf("%d", &n);

	int i, j , a[3][3], b[3][3];
	int size= 3;

	printf("enter the array elements of a\n");
	for(i=0; i < 3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("enter the array elements of a\n");
	
	for(i=0; i < 3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}

	add(a, b, size);
	sub(a, b, size);
	mul(a, b, size);
return 0;
}
