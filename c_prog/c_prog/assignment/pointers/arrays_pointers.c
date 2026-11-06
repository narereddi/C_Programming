
#include <stdio.h>
/*
void main()
{
		

	{
		int a[]= {3, 1, 2, 5, 21, 4};
		int *ptr = a;
		printf("address of a is %p\n", &a);
		printf("address of a is %p\n", ptr);
		printf("address of a is %p\n", ptr + 1);
	}
	
		
	//2. accesing array elements using pointers

	{
		int a[]= {3, 1, 2, 5, 21, 4};
		int i;
		int *ptr = a;
		int size = sizeof(a)/sizeof(a[0]);
		for(i=0; i<size; i++)
		{
			printf("arr[%d] is %d\n", i, *(ptr +i) );
		}
		printf("\n");		
	}


	//3. accessing array element addresses using pointers.
	{
		int a[]= {3, 1, 2, 5, 21, 4};
		int i;
		int *ptr = a;
		int size = sizeof(a)/sizeof(a[0]);
		for(i=0; i<size; i++)
		{
			printf("address of arr[%d] is %p\n", i, (ptr +i) );
		}
		printf("\n");		
	}
		

}
	
*/

/*

	//4. printing array elements in functions using pointers.
		int fun(int *, int );
		
		int main()
		{
			int a[]= {33, 1, 12, 5, 67, 7};
			int size = sizeof(a)/sizeof(a[0]);		
			fun (a, size);
		}
		
		int fun(int *ptr, int size)
		{
			int i;
			for(i=0; i<size; i++)
			{
				printf("%d ", *(ptr + i) );
			}
			printf("\n");
		}

*/

/*
	//5. 2D array.

	void main()
	{

		int a[][4] = {
					{2, 5, 1, 4},
					{2, 9, 1, 4},
			 		{3, 5, 1, 7}
			     };
		int i, j;
		for(i=0; i<3; i++)
		{
			for(j=0; j<4; j++)
			{
		
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
	
*/


	//6. pointer to an array.
/*		
	🔹 Concept:

	A pointer to an array is a single pointer variable that points to the en	tire array as one block (not to the first element individually).

	🔹 Declaration:  int (*ptr)[n];
	
	Here:
	ptr is a pointer to an array of n integers.
	It means *ptr represents the entire array (not one element).
*/	

/*	
	void main()
	{
		int a[] = {3, 6, 7, 1, 3, 12, 21};
		int size = sizeof(a)/ sizeof(a[0]);
		int (*ptr)[size];
		ptr = &a;
	
		printf("address of a is %p\n", a);
		printf("address of a is %p\n", ptr);		
		int i;
		for(i=0; i<size; i++)
		{
			printf("%d ", (*ptr)[i]);
		}
		printf("\n");
	}

*/


 	//7.Array of Pointers
	
/*
	🔹 Concept:

	An array of pointers means you have multiple pointers, each can point to	 different variables or arrays.

	🔹 Declaration:	int *ptr[n];

	Here:
	ptr is an array of n integer pointers.
	Each ptr[i] can point to an integer.
*/
	

/*
	void main()
	{
		int i;
		int a[]	= {44, 21, 62, 4, 12, 84};
		int size = sizeof(a)/ sizeof(a[0]);	
		int *ptr[size];	
		for(i=0; i<size; i++)
		{
			ptr[i] = &a[i];
		}
	
		for(i=0; i<size; i++)
		{
			printf("%d ", *ptr[i]);
		}
		printf("\n");			
	}

*/
