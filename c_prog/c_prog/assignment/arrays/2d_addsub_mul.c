#include <stdio.h>

void main()
{
	int i, j, n, k;
	
	printf("enter the size of the 2d arrays\n");
	scanf("%d", &n);

	int a[n][n], b[n][n], sum[n][n], sub[n][n], mul[n][n] ;
	


	for (i = 0; i < n; i++)
   	{
        	for (j = 0; j < n; j++)
        	{
          	  mul[i][j] = 0;
       		}
 	}

	printf("enter the elements of array a\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");


	printf("elements of array a are ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
	}
	printf("\n");


	printf("enter the elements of array b\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("\n");



	printf("elements of array b are ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", b[i][j]);
		}
	}
	printf("\n");

	//process addition.
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\n");


	printf("sum of the elements of the array a and b are ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", sum[i][j]);
		}
	}
	printf("\n");


  	//process subtraction.
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("\n");


	printf("subraction of the elements of the array a and b are ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", sub[i][j]);
		}
	}
	printf("\n");
	

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			for(k=0; k<n; k++)
			{
		
			mul[i][j] = mul[i][j] + (a[i][k]) * (b[k][j]);
			}
		}
	}
	printf("\n");

	
	printf("multiplication of the elements of the array a and b are ");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d ", mul[i][j]);
		}
	}

}


	

