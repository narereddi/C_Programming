#include <stdio.h>
#define SIZE 6

void main()
{
	int i, low=0, high = SIZE -1, mid, key;
	int a[SIZE];
	printf("enter the elements in the array\n");

	for(i=0; i<SIZE; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter the key needs to be found\n");
	scanf("%d", &key);

	

	while(low <= high)
	{	
	
		mid = (low + high)/2;
	
		if(key == a[mid] )
		{
			printf("key is found with position %d and key is %d\n",mid, a[mid]);
			break;
		}
		else if(key <= a[mid] )
		{
			high = mid -1;
		}
		else 
		{
			low = mid +1;
		}
	}
	if(low > high)
	{
		printf("key not found\n");
	}
}
