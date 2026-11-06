/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main()
{
    
    
    /*
    //maximum element and sec_max in an array ;
    
    int i, arr[5], sec_max;
    printf("enter the elements\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int max = arr[0];
    sec_max = INT_MIN;
    
    for(i=0; i<5; i++)
    {
        if(arr[i] >max)
        {
            sec_max = max;
            max = arr[i];
        }
        
        if(arr[i] > sec_max && arr[i] != max)
        {
            sec_max = arr[i];
        }
    }
    
    printf("max num and sec max numbers are %d and %d\n", max, sec_max);
    */
    
    
    
    /*
    //Write a C program to count total number of even and odd elements in an array.
    
    int i, even_count =0, odd_count =0, arr[10];
    printf("enter the elements of an array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if(arr[i] % 2 ==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    
    printf("even count is %d and odd count is %d\n", even_count, odd_count);
    */
    
    
    
    /*
    //Write a C program to count total number of negative elements in an array.
    
    int i, count=0, arr[10];
    printf("enter the elements of an array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i<5; i++)
    {
        if(arr[i] < 0)
        {
            count ++;
        }
    }
    printf("no of negative numbers in  an array is %d\n", count);
    */
    
    
    
    /*
    //Write a C program to copy all elements from an array to another array.
    
    
    int i, j;
    int arr1[10]= {1, 2, 3, 4, 5};
    int arr2[]= {6, 7, 8, 9, 10};
    int arr3[10];
   
    
    for(i=0; i<5; i++)
    {
        arr1[i +5] = arr2[i];
    }
    
    //for(i=0; i<5; i++)
    //{
    //   arr3[i + 5] = arr2[i];
    //}
    
    for(j=0; j<10; j++)
    {
        printf("%d ", arr1[j]);
    }
    */
    
    /*
    //Write a C program to insert an element in an array.
    
    int i, num, pos;
    int arr[10] = {1, 4, 5, 7, 3};
    //int size = sizeof(arr)/sizeof(arr[0]);
    int size = 5;
    printf("enter the element to insert\n");
    scanf("%d", &num);
    
    printf("enter the position to insert\n");
    scanf("%d", &pos);


    for(i=size; i>=pos-1; i--)
    {
        arr[i] = arr[i-1];
    }
    
    
    arr[pos -1 ] = num;
    size++;
    
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
  */


/*
//Write a C program to delete an element from an array  specified position.
    
	int arr[10] = {1, 2, 3, 4, 5, 6};
	int pos, size = 6;
	printf("enter the position to delete\n");
	scanf("%d", &pos);

	int i;
	for(i=pos-1; i<size; i++)
	{
		arr[i] = arr[i+1];
	}
	size--;
	
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
*/
	
	/*

	//Write a C program to print all unique elements in the array.

	int arr[]= {1, 2, 2, 3, 1, 4, 6 ,6, 7, 8, 9, 9};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i, j, flag;
	for(i=0; i<size; i++)
	{	
		flag =0;
		for(j=0; j<size; j++)
		{
			if( i != j && arr[i] == arr[j])
			{
				flag =1;
				break;
			}
		}
		if(!flag)
		{
			printf("%d ", arr[i]);
		}

	}
	printf("\n");
	*/


	/*

	//Write a C program to count total number of duplicate elements in an array.

	int arr[] = {1, 2, 1, 3, 3, 6, 6, 4, 6, 7};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i, j, duplicate_count =0, visit[10] ={0};
	for(i=0; i<size; i++)
	{
		if(visit[i] == -1)
			continue;
		int count=0;

		for(j=0; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				visit[j] = -1;		
			}
		}
		if(count > 1)
			duplicate_count++;
	}
	printf("count is %d\n", duplicate_count);
	*/



/*
	//Write a C program to delete all duplicate elements from an array.

	int arr[]= {2, 1, 3, 2, 6, 7, 6, 6, 5, 9, 9, 9};
	int size = sizeof(arr)/sizeof(arr[0]);

	int i, j, flag;
	for(i=0; i<size; i++)
	{
		flag = 0;
		for(j=i+1; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				flag = 1;
				break;
			}
		}
		if(!flag)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");

*/


	//Write a C program to count frequency of each element in an array.

	int arr[]= {1, 2, 3, 2, 3, 3, 4, 4, 4, 4 };
	int size = sizeof(arr)/ sizeof(arr[0]);
	int i, j, count, visit[20] = {0};
	for(i=0; i<size; i++)
	{
		if(visit[i] == 1)
		continue;

		count = 0;
		for(j=0; j<size; j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
				visit[j] = 1;
			}
		}
		printf("%d - %d \n", arr[i], count);
	}
		
	
    return 0;
}
