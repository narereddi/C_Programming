#include <stdio.h>

void main()
{
	int i, k;
	int a[5] = {5, 3, 44, 4}; 
	printf("enter the to insert in the array\n");
	scanf("%d", &k);
	a[4] = k;
	for(i=0; i<5; i++)
	{
		printf("%d ", a[i]);
	}
}
