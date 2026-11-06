#include <stdio.h>
void main()
{
	int i,j, val=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		   printf("%d  ", val);
		   val++; 
		}
		printf("\n");
	}
}
