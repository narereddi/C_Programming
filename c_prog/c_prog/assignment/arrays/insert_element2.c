i#include <stdio.h>

void main()
{
	int i,pos, n =4, value;
	int a[6] = {1, 4, 8, 2};
	printf("enter the value and position of array at which value need to insert\n");
	scanf("%d%d", &value, &pos);
	
	for(i=n; i>pos; i--)
	{
		a[i] = a[i - 1];
	}
	
	a[pos] = value;
	
	n++;
	
	for(i=0; i<n; i++)
	{
		printf("%d ", a[i]);
	}
}

	
