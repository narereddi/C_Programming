#include <stdio.h>

void main()
{
	int i, key, flag =1;
	int a[10];
	printf("enter the 10 elements\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter key number\n");
	scanf("%d", &key);
	for(i=0; i<10; i++)
	{
		if(key == a[i])
		{
			flag == 1;
		}
		
	}
	if(flag)
	{
		printf("%d is found\n", key);
	}
}
